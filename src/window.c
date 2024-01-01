#include "header/window.h"


window setupWindow(){
    window window;
    window.size.x = 1600;
    window.size.y = 900;
    window.name = "FigeChaser";
    return window;
}


bool startWindow(gameState* gameState) {
    SetTraceLogLevel(LOG_ERROR);
    gameState->player.isInitialized = false;
    gameState->scene.isInitialized = false;
    gameState->window = setupWindow();
    InitWindow(gameState->window.size.x, gameState->window.size.y, gameState->window.name);
    Image image = LoadImage("resources/icon.png");
    SetWindowIcon(image);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        drawCurrentScene(gameState);
        EndDrawing();
    }
    CloseWindow();
    return true;
}

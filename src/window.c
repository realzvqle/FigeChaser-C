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
    gameState->window = setupWindow();
    InitWindow(gameState->window.size.x, gameState->window.size.y, gameState->window.name);
    SetExitKey(KEY_P);
    Image image = LoadImage("resources/icon.png");
    Texture2D texture = LoadTexture("resources/background.png");
    SetWindowIcon(image);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(texture, 1600 / 160, 900 / 160, WHITE);

        drawCurrentScene(gameState);

        EndDrawing();
    }
    CloseWindow();
    return true;
}

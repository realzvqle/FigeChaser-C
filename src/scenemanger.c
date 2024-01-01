#include "header/scenemanager.h"


void InitializeGame(gameState* gameState){
    gameState->font.size = 400;
    gameState->font.font = LoadFontEx("resources/font.ttf", gameState->font.size, NULL, 0);
    gameState->scene.currentScene = 0;
    gameState->scene.isInitialized = true;
}


int drawCurrentScene(gameState* gameState){
    if(gameState->scene.isInitialized == false){
        InitializeGame(gameState);
    }
    switch(gameState->scene.currentScene){
        case 0:
            figeDrawText(gameState, "Idk", 10, 10, 100, BLUE);
            if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
            break;
        case 1:
            figeDrawText(gameState, "Welp", 10, 10, 200, RED);
            break;
        default: 
            figeDrawText(gameState, "INVALID SCENE", 10, 10, 90, RED);
            break;
    }

    return gameState->scene.currentScene;
}
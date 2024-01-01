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
            drawMenuScreen(gameState);
            break;
        case 1:
            gameLoop(gameState);
            break;
        default: 
            figeDrawText(gameState, "INVALID SCENE", 10, 10, 90, RED);
            break;
    }

    return gameState->scene.currentScene;
}
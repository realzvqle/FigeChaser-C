#include "header/target.h"



entity setupTarget(gameState* gameState){
    entity target;
    target.position.x = gameState->window.size.x / 2 + 120;
    target.position.y = gameState->window.size.y / 2 + 120;
    target.size.x = 30;
    target.size.y = 30;
    target.rotation = 0.0;
    target.texture = LoadTexture("resources/target.png");
    target.isInitialized = true;
    return target;

}




void drawTarget(gameState* gameState){
    if(gameState->target.isInitialized == false){
        gameState->target = setupTarget(gameState);
    }
    DrawTextureEx(gameState->target.texture, (Vector2){gameState->target.position.x,gameState->target.position.y}, gameState->target.rotation, 1.0f, WHITE);
}
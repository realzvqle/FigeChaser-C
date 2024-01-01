#include "header/player.h"


player setupPlayer(gameState* gameState){
    player player;
    player.position.x = gameState->window.size.x / 2;
    player.position.y = gameState->window.size.y / 2;
    player.size.x = 30;
    player.size.y = 30;
    player.texture = LoadTexture("resources/player.png");
    player.isInitialized = true;
    return player;
}




void drawPlayer(gameState* gameState){
    if(gameState->player.isInitialized == false){
        gameState->player = setupPlayer(gameState);
    }
    DrawTexture(gameState->player.texture, gameState->player.position.x, gameState->player.position.y, WHITE);
}


#include "header/collision.h"




float checkDistance(transform* first, transform* second){
    float deltaX = first->x - second->x;
    float deltaY = first->y - second->y;
    float distance = sqrt(deltaX * deltaX + deltaY * deltaY);

    return distance;
}



void checkCollision(gameState* gameState){
    if(checkDistance(&gameState->enemy.position, &gameState->player.position) < 0.1){
        gameState->scene.currentScene = 2;
    }
}


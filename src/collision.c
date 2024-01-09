#include "header/collision.h"




float checkDistance(transform* first, transform* second){
    float deltaX = first->x - second->x;
    float deltaY = first->y - second->y;
    float distance = sqrt(deltaX * deltaX + deltaY * deltaY);

    return distance;
}


void addScore(gameState* gameState){
    gameState->target.position.x = GetRandomValue(0, 1400);
    gameState->target.position.y = GetRandomValue(0, 600);
    gameState->target.rotation = (float)GetRandomValue(0, 360);
    gameState->score++;
}

void checkCollision(gameState* gameState){
    if(checkDistance(&gameState->enemy.position, &gameState->player.position) < 30){
        gameState->scene.currentScene = 2;
    }
    if(checkDistance(&gameState->enemy.position, &gameState->target.position) < 32){
        gameState->scene.currentScene = 2;
    }
    if(checkDistance(&gameState->target.position, &gameState->player.position) < 32){
        addScore(gameState);
    }
}


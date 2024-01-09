#include "header/gameLoop.h"





void gameLoop(gameState* gameState){
    DrawTexture(gameState->background, 1600 / 160, 900 / 160, WHITE);

    drawTarget(gameState);

    controlPlayer(gameState);
    drawPlayer(gameState);
    drawEnemy(gameState);
    float distanceToTarget = checkDistance(&gameState->enemy.position, &gameState->target.position);
    float distanceToPlayer = checkDistance(&gameState->enemy.position, &gameState->player.position);
    if (distanceToTarget <= distanceToPlayer) {
        moveEnemy(&gameState->enemy.position, &gameState->target.position, &gameState->enemy);
    } else {
         moveEnemy(&gameState->enemy.position, &gameState->player.position, &gameState->enemy);
    }
    checkCollision(gameState);
    char scoreStr[BUFSIZE];
    sprintf(scoreStr, "%d", gameState->score);
    figeDrawText(gameState, scoreStr, (gameState->window.size.x - MeasureText(scoreStr, 50)) / 2, 10, 50, VIOLET);
    if(IsKeyDown(KEY_ESCAPE)) gameState->scene.currentScene = 3;

}


// A = -90 - D = 90
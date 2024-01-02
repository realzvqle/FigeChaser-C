#include "header/gameLoop.h"





void gameLoop(gameState* gameState){
     DrawTexture(gameState->background, 1600 / 160, 900 / 160, WHITE);

    controlPlayer(gameState);
    drawPlayer(gameState);
    drawEnemy(gameState);
    moveEnemy(&gameState->enemy.position, &gameState->player.position, &gameState->enemy);
    checkCollision(gameState);

    if(IsKeyDown(KEY_ESCAPE)) gameState->scene.currentScene = 3;

}


// A = -90 - D = 90
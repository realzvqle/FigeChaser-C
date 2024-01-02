#include "header/gameLoop.h"





void gameLoop(gameState* gameState){
    
    controlPlayer(gameState);
    drawPlayer(gameState);
    drawEnemy(gameState);
    moveEnemy(&gameState->enemy.position, &gameState->player.position, &gameState->enemy);
    checkCollision(gameState);

    if(IsKeyDown(KEY_ESCAPE)) gameState->scene.currentScene = 3;

}


// A = -90 - D = 90
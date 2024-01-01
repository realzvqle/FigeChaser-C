#include "header/screens.h"



void drawMenuScreen(gameState* gameState){
    figeDrawText(gameState, "FigeChaser", (gameState->window.size.x - MeasureText("FigeChaser", 70)) / 2, gameState->window.size.y / 2 - 40, 70, GREEN);
    figeDrawText(gameState, "Press Space To Start", (gameState->window.size.x - MeasureText("Press Space To Start", 40)) / 2, gameState->window.size.y / 2 + 80, 40, BLUE);
    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}

void drawLooseScreen(gameState* gameState){
    // TODO: Draw A Loose Screen
}

void drawPauseScreen(gameState* gameState){
    // TODO: Draw A Pause Screen
}
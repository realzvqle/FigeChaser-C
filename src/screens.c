#include "header/screens.h"



void drawMenuScreen(gameState* gameState){
    figeDrawText(gameState, "FigeChaser", (gameState->window.size.x - MeasureText("FigeChaser", 70)) / 2, gameState->window.size.y / 2 - 40, 70, GREEN);
    figeDrawText(gameState, "Press Space To Start", (gameState->window.size.x - MeasureText("Press Space To Start", 40)) / 2, gameState->window.size.y / 2 + 80, 40, BLUE);
    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}

void drawLooseScreen(gameState* gameState){
    figeDrawText(gameState, "You Loose!", (gameState->window.size.x - MeasureText("You Loose!", 70)) / 2, gameState->window.size.y / 2 - 40, 70, RED);
    figeDrawText(gameState, "Press Space To Restart", (gameState->window.size.x - MeasureText("Press Space To Restart", 40)) / 2, gameState->window.size.y / 2 + 80, 40, WHITE);
    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}

void drawPauseScreen(gameState* gameState){
    figeDrawText(gameState, "Paused", (gameState->window.size.x - MeasureText("Paused", 70)) / 2, gameState->window.size.y / 2 - 40, 70, GREEN);
    figeDrawText(gameState, "Press Space To Continue", (gameState->window.size.x - MeasureText("Press Space To Continue", 40)) / 2, gameState->window.size.y / 2 + 80, 40, WHITE);
    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}
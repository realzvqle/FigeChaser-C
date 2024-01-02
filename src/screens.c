#include "header/screens.h"



void drawMenuScreen(gameState* gameState){
    figeDrawText(gameState, "Copyright zvqle", 10, 10, 40, PINK);;
    figeDrawText(gameState, "Build 0.1", 10, 60, 40, PINK);

    figeDrawText(gameState, "FigeChaser", (gameState->window.size.x - MeasureText("FigeChaser", 70)) / 2, gameState->window.size.y / 2 - 60, 70, GREEN);
    figeDrawText(gameState, "Press Space To Start", (gameState->window.size.x - MeasureText("Press Space To Start", 40)) / 2, gameState->window.size.y / 2 + 80, 40, BLUE);
    figeDrawText(gameState, "Press P To Quit", (gameState->window.size.x - MeasureText("Press P To Quit", 40)) / 2, gameState->window.size.y / 2 + 160, 40, PURPLE);

    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}

void drawLooseScreen(gameState* gameState){
    figeDrawText(gameState, "You Loose!", (gameState->window.size.x - MeasureText("You Loose!", 70)) / 2, gameState->window.size.y / 2 - 60, 70, RED);
    figeDrawText(gameState, "Press Space To Restart", (gameState->window.size.x - MeasureText("Press Space To Restart", 40)) / 2, gameState->window.size.y / 2 + 80, 40, WHITE);
    figeDrawText(gameState, "Press P To Quit", (gameState->window.size.x - MeasureText("Press P To Quit", 40)) / 2, gameState->window.size.y / 2 + 160, 40, PURPLE);

    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}

void drawPauseScreen(gameState* gameState){
    figeDrawText(gameState, "Paused", (gameState->window.size.x - MeasureText("Paused", 70)) / 2, gameState->window.size.y / 2 - 60, 70, GREEN);
    figeDrawText(gameState, "Press Space To Continue", (gameState->window.size.x - MeasureText("Press Space To Continue", 40)) / 2, gameState->window.size.y / 2 + 80, 40, WHITE);
    figeDrawText(gameState, "Press P To Quit", (gameState->window.size.x - MeasureText("Press P To Quit", 40)) / 2, gameState->window.size.y / 2 + 160, 40, PURPLE);

    if(IsKeyDown(KEY_SPACE)) gameState->scene.currentScene = 1;
}
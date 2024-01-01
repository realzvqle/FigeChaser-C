#include "header/loadCustomFont.h"




void figeDrawText(gameState* gameState, char* text, int width, int height, float size, Color color){
    DrawTextEx(gameState->font.font, text, (Vector2){width, height}, size, 1, color);
}
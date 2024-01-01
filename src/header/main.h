#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <raylib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct transform {
    float x;
    float y;
} transform;

typedef struct window {
    transform size;
    char* name;
} window;

typedef struct sceneManager{
    int currentScene;
    bool isInitialized;
} sceneManager;

typedef struct fontLoading{
    Font font;
    int size;
} fontLoading;

typedef struct player {
    Texture2D texture;
    transform size;
    transform position;
    bool isInitialized;
} player;
typedef struct gameState {
    window window;
    sceneManager scene;
    fontLoading font;
    player player;
} gameState;




void figeDrawText(gameState* gameState, char* text, int width, int height, float size, Color color);

#endif
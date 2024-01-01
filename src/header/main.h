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

typedef struct gameState {
    window window;
    sceneManager scene;
    fontLoading font;
} gameState;


#endif
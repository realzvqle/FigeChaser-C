#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <raylib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>



#define dt GetFrameTime()
#define BUFSIZE 512


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

typedef struct entity {
    Texture2D texture;
    transform size;
    transform position;
    float rotation;
    bool isInitialized;
} entity;

typedef struct gameState {
    window window;
    sceneManager scene;
    fontLoading font;
    entity player;
    entity enemy;
    entity target;
    Texture2D background;
    int score;
} gameState;




void figeDrawText(gameState* gameState, char* text, int width, int height, float size, Color color);

#endif
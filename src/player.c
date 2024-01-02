#include "header/player.h"


entity setupPlayer(gameState* gameState){
    entity player;
    player.position.x = gameState->window.size.x / 2;
    player.position.y = gameState->window.size.y / 2;
    player.size.x = 30;
    player.size.y = 30;
    player.rotation = 0.0;
    player.texture = LoadTexture("resources/player.png");
    player.isInitialized = true;
    printf("s\n");
    return player;

}




void drawPlayer(gameState* gameState){
    if(gameState->player.isInitialized == false){
        gameState->player = setupPlayer(gameState);
    }
    DrawTextureEx(gameState->player.texture, (Vector2){gameState->player.position.x,gameState->player.position.y}, gameState->player.rotation, 1.5f, WHITE);
}



void controlPlayer(gameState* gameState){
    if(IsKeyDown(KEY_W)){
        gameState->player.position.y -= 400 * dt;
        gameState->player.rotation = -0.0;
        return;
    } 
    if(IsKeyDown(KEY_S)){
        gameState->player.position.y += 400 * dt;
        gameState->player.rotation = 180.0;
        return;
    } 
    if(IsKeyDown(KEY_A)){
        gameState->player.position.x -= 400 * dt;
        gameState->player.rotation = -90.0;
        return;
    } 
    if(IsKeyDown(KEY_D)){
        gameState->player.position.x += 400 * dt;
        gameState->player.rotation = 90.0;
        return;
    } 


    // Border Checking
    if (gameState->player.position.y <= -9) gameState->player.position.y = -9 * dt;
	if (gameState->player.position.y >= 877) gameState->player.position.y -= 800 * dt;
	if (gameState->player.position.x <= -6) gameState->player.position.x = -6 * dt;
	if (gameState->player.position.x >= 1576) gameState->player.position.x = 1576 * dt;
    
}

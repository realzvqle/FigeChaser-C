#include "header/enemy.h"


entity setupEnemy(gameState* gameState){
    entity enemy;
    enemy.position.x = gameState->window.size.x / 3;
    enemy.position.y = gameState->window.size.y / 3;
    enemy.size.x = 30;
    enemy.size.y = 30;
    enemy.rotation = 0.0;
    enemy.texture = LoadTexture("resources/enemy.png");
    enemy.isInitialized = true;
    return enemy;

}




void drawEnemy(gameState* gameState){
    if(gameState->enemy.isInitialized == false){
        gameState->enemy = setupEnemy(gameState);
    }
    DrawTextureEx(gameState->enemy.texture, (Vector2){gameState->enemy.position.x,gameState->enemy.position.y}, gameState->enemy.rotation, 1.5f, WHITE);
}



void moveEnemy(transform* follower, transform* target, entity* enemy) {
    float speed = 200.0f * dt;    

    if (target->x > follower->x) {
        follower->x = fmin(follower->x + speed, target->x);
        enemy->rotation = 90;

    } else if(target->x < follower->x){
        follower->x = fmax(follower->x - speed, target->x);
        enemy->rotation = -90;

    }
    else if (target->y > follower->y) {
        follower->y = fmin(follower->y + speed, target->y);
        enemy->rotation = 180;
        
    } else if (target->y < follower->y){
        follower->y = fmax(follower->y - speed, target->y);
        enemy->rotation = -0;
    }

    // Border Checking
    if (follower->y <= -9) follower->y = -9 * dt;
	if (follower->y >= 877) follower->y -= 800 * dt;
	if (follower->x <= -6) follower->x = -6 * dt;
	if (follower->x >= 1576) follower->x = 1576 * dt;
}
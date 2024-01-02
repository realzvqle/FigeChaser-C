#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "main.h"

void drawEnemy(gameState* gameState);
void moveEnemy(transform* follower, transform* target, entity* enemy);

#endif
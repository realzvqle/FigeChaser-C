#include "header/window.h"

int main(void) {
    gameState gameState;
    startWindow(&gameState);

    return gameState.scene.currentScene;
}

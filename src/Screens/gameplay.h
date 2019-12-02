#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include "raylib.h"

namespace Game
{
	void InitWindowGame();
	void InitGame();
	void GamePlayScreen();
	void Update();
	void Draw();

	float extern timer;

	extern Vector2 playerPosition;
	extern Rectangle frameRec;
	extern float currentFrame;
	extern float framesCounter;

	extern float maxCounter;
}

#endif

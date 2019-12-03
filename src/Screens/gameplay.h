#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include "raylib.h"

namespace Game
{
	void InitWindowGame();
	void InitGame();
	void GamePlayScreen();
	void MuteAll();
	void PauseGame();
	void Update();
	void Draw();

	extern Texture2D background;

	extern Vector2 playerPosition;
	extern Rectangle frameRec;
	extern float currentFrame;
	extern float framesCounter;

	extern float maxCounter;

	extern bool pause;
}

#endif

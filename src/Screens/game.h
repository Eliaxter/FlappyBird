#ifndef GAME_H
#define GAME_H

#include "raylib.h"

namespace Game
{
	enum GameState
	{
		StartMenu,
		Instructions,
		Game,
		FinalMenu,
		Credits,
		EndGame
	};

	extern GameState gameState;

	extern const int screenWidth;
	extern const int screenHeight;
	extern int minScreenWidth;
	extern int minScreenHeight;

	extern Music backgroundMusic;

	void GameLoop();
}

#endif
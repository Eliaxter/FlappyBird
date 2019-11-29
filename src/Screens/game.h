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
		CloseAll
	};

	extern GameState gameState;

	extern const int screenWidth;
	extern const int screenHeight;
	extern const int minScreenWidth;
	extern const int minScreenHeight;

	extern Music backgroundMusic;

	void GameLoop();
}

#endif
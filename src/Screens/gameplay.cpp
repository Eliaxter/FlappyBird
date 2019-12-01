#include "gameplay.h"

#include "raylib.h"

#include "game.h"
#include "gameobjects/player.h"
#include "gameobjects/pipes.h"

namespace Game
{
	const int screenWidth = 800;
	const int screenHeight = 450;
	int minScreenWidth = 0;
	int minScreenHeight = 0;

	void InitWindowGame() 
	{
		InitWindow(screenWidth, screenHeight, "Happy Flappy -V0.1");
	}

	void InitGame() 
	{
		InitPlayer();
		InitPipes();
	}

	void GamePlayScreen()
	{
		Update();
		Draw();
	}

	void Update() 
	{
		MovePlayer();
		LimitWithScreen();
		MovePipes();
		PipesOutOfScreen();
	}

	void Draw() 
	{
		ClearBackground(BLACK);
		DrawPlayer();
		DrawPipes();
	}
}
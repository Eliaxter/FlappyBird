#include "gameplay.h"

#include "raylib.h"

#include "game.h"
#include "gameobjects/player.h"

namespace Game
{
	const int screenWidth = 800;
	const int screenHeight = 450;
	const int minScreenWidth = 0;
	const int minScreenHeight = 0;

	void InitWindowGame() 
	{
		InitWindow(screenWidth, screenHeight, "Happy Flappy -V0.1");
	}

	void GamePlayScreen() 
	{
		Update();
		Draw();
	}

	void Update() 
	{

	}

	void Draw() 
	{
		ClearBackground(BLACK);
	}
}
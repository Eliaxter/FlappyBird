#include "gameplay.h"

#include "raylib.h"

#include "screens/game.h"

namespace Game
{
	const int screenWidth = 680;
	const int screenHeight = 480;
	const int minScreenWidth = 0;
	const int minScreenHeight = 0;

	void InitWindowGame() 
	{
		InitWindow(screenWidth, screenHeight, "Happy Flappy -V0.1");
	}

	void GamePlay() 
	{
		Update();
		Draw();
	}

	void Update() 
	{

	}

	void Draw() 
	{
		BeginDrawing();
		EndDrawing();
	}
}
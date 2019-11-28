#include "game.h"

#include "raylib.h"


namespace Game
{
	GameState gameState = GameState::StartMenu;

	const float screenWidth = 680.0f;
	const float screenHeight = 480.0f;
	const int minScreenWidth = 0;
	const int minScreenHeight = 0;

	void GameLoop()
	{
		while (!WindowShouldClose())
		{
			BeginDrawing();
			ClearBackground(BLACK);
			if (gameState == GameState::StartMenu)
			{

			}
			if (gameState == GameState::Instructions)
			{

			}
			if (gameState == GameState::Game)
			{

			}
			if (gameState == GameState::FinalMenu)
			{

			}
			if (gameState == GameState::Credits)
			{

			}
			if (gameState == GameState::CloseAll)
			{

			}
			EndDrawing();
		}
	}

}

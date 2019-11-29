#include "game.h"

#include "raylib.h"

#include "screens/gameplay.h"


namespace Game
{
	GameState gameState = GameState::StartMenu;

	void GameLoop()
	{
		while (!WindowShouldClose())
		{
			InitWindowGame();
			ClearBackground(BLACK);
			if (gameState == GameState::StartMenu)
			{

			}
			if (gameState == GameState::Instructions)
			{

			}
			if (gameState == GameState::Game)
			{
				GamePlay();
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
		}
	}

}

#include "game.h"

#include "raylib.h"

#include "gameplay.h"
#include "menu.h"
#include "instructions.h"
#include "final_menu.h"
#include "credits.h"
#include "gameobjects/player.h"


namespace Game
{
	GameState gameState = GameState::StartMenu;

	void GameLoop()
	{
		InitWindowGame();
		while (!WindowShouldClose())
		{
			BeginDrawing();
			ClearBackground(BLACK);
			if (gameState == GameState::StartMenu)
			{
				MenuScreen();
			}
			if (gameState == GameState::Instructions)
			{
				InstructionsScreen();
			}
			if (gameState == GameState::Game)
			{
				GamePlayScreen();
			}
			if (gameState == GameState::FinalMenu)
			{
				FinalMenuScreen();
			}
			if (gameState == GameState::Credits)
			{
				CreditsScreen();
			}
			if (gameState == GameState::CloseAll)
			{
				CloseWindow();
			}
			EndDrawing();
		}
		UnloadTexture(player.sprite);
		UnloadTexture(background);
		UnloadSound(pointSFX);
		UnloadSound(wingSFX);
	}

}

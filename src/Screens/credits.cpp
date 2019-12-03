#include "credits.h"

#include "raylib.h"

#include "game.h"
#include "gameplay.h"
#include "gameobjects/player.h"

namespace Game 
{
	static int fontSize = 20;
	static int fontSize1 = 40;

	static int coordTxtX = 300;
	static int coordTxtY = 100;

	static int coordTxt2X = 100;
	static int coordTxt2Y = 180;

	static int coordTxt3X = 100;
	static int coordTxt3Y = 220;

	static int coordTxt4X = 100;
	static int coordTxt4Y = 260;

	static int coordTxt5X = 100;
	static int coordTxt5Y = 300;

	static int coordTxt6X = 100;
	static int coordTxt6Y = 340;

	static int coordTxt7X = 100;
	static int coordTxt7Y = 380;

	void InputCredits() 
	{
		if (IsKeyDown(KEY_B))
		{
			gameState = GameState::FinalMenu;
		}
		if (IsKeyDown(KEY_M))
		{
			UnloadTexture(player.sprite);
			UnloadTexture(background);
			UnloadSound(pointSFX);
			UnloadSound(wingSFX);
			gameState = GameState::StartMenu;
			InitGame();
		}
	}

	void DrawTextCredits() 
	{
		DrawText("Credits", coordTxtX, coordTxtY, fontSize1, GREEN);

		DrawText("Sounds FX: https://www.sounds-resource.com/mobile/flappybird/", coordTxt2X, coordTxt2Y, fontSize, PURPLE);

		DrawText("Sprites & Background: https://www.opengameart.org", coordTxt3X, coordTxt3Y, fontSize, PURPLE);

		DrawText("To back to Menu Final, press the key: B", coordTxt4X, coordTxt4Y, fontSize, RAYWHITE);

		DrawText("To return Main Menu, press the key: M", coordTxt5X, coordTxt5Y, fontSize, RAYWHITE);

		DrawText("To exit, press the key: ESCAPE", coordTxt6X, coordTxt6Y, fontSize, RAYWHITE);

		DrawText("Version: V0.2", coordTxt7X, coordTxt7Y, fontSize, RED);

	}

	void CreditsScreen() 
	{
		InputCredits();
		DrawTextCredits();
	}
}
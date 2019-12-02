#include "credits.h"

#include "raylib.h"

#include "game.h"

namespace Game 
{
	static int fontSize = 20;
	static int fontSize1 = 40;

	static int coordTxtX = 300;
	static int coordTxtY = 140;

	static int coordTxt2X = 300;
	static int coordTxt2Y = 180;

	static int coordTxt3X = 300;
	static int coordTxt3Y = 220;

	static int coordTxt4X = 300;
	static int coordTxt4Y = 260;

	static int coordTxt5X = 300;
	static int coordTxt5Y = 300;

	static int coordTxt6X = 300;
	static int coordTxt6Y = 340;

	void InputCredits() 
	{
		if (IsKeyDown(KEY_B))
		{
			gameState = GameState::FinalMenu;
		}
		if (IsKeyDown(KEY_M))
		{
			gameState = GameState::StartMenu;
		}
	}
	void DrawTextCredits() 
	{
		DrawText("Credits", coordTxtX, coordTxtY, fontSize1, GREEN);

		DrawText("Audio & Sounds: Lautaro Brucart Thank You!", coordTxt2X, coordTxt2Y, fontSize, PURPLE);

		DrawText("Sounds created only for this Arkanoid", coordTxt3X, coordTxt3Y, fontSize, PURPLE);

		DrawText("To back to Menu Final, press the key: B", coordTxt4X, coordTxt4Y, fontSize, RAYWHITE);

		DrawText("To return Main Menu, press the key: M", coordTxt5X, coordTxt5Y, fontSize, RAYWHITE);

		DrawText("To exit, press the key: ESCAPE", coordTxt6X, coordTxt6Y, fontSize, RAYWHITE);
	}
	void CreditsScreen() 
	{
		InputCredits();
		DrawTextCredits();
	}
}
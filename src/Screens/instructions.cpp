#include "instructions.h"

#include "raylib.h"

#include "game.h"
#include "gameplay.h"
#include "gameobjects/player.h"

namespace Game 
{
	static int fontSize1 = 20;
	static int fontSize2 = 25;
	static int fontSize3 = 30;

	static int coordTxtX = 340;
	static int coordTxtY = 120;

	static int coordTxt2X = 190;
	static int coordTxt2Y = 160;

	static int coordTxt3X = 190;
	static int coordTxt3Y = 180;

	static int coordTxt4X = 190;
	static int coordTxt4Y = 200;

	static int coordTxt5X = 680;
	static int coordTxt5Y = 420;

	void InputInstructions() 
	{
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

	void DrawTextInstructions() 
	{
		DrawText("How To play", coordTxtX, coordTxtY, fontSize3, GRAY);

		DrawText("To fly the bird, press the key: SPACE", coordTxt2X, coordTxt2Y, fontSize1, RAYWHITE);
	}

	void InstructionsScreen() 
	{
		InputInstructions();
		DrawTextInstructions();
	}
}
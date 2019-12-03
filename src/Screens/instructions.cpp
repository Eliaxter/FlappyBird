#include "instructions.h"

#include "raylib.h"

#include "game.h"
#include "gameplay.h"
#include "gameobjects/player.h"

namespace Game 
{
	static int fontSize1 = 20;
	static int fontSize2 = 25;
	static int fontSize3 = 50;

	static int coordTxtX = 250;
	static int coordTxtY = 100;

	static int coordTxt2X = 190;
	static int coordTxt2Y = 240;

	static int coordTxt3X = 190;
	static int coordTxt3Y = 280;

	static int coordTxt4X = 190;
	static int coordTxt4Y = 320;

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
		DrawText("How To play", coordTxtX, coordTxtY, fontSize3, YELLOW);

		DrawText("To fly the bird, press the key: SPACE", coordTxt2X, coordTxt2Y, fontSize1, RAYWHITE);

		DrawText("Avoid bumping into obstacles to get the most points", coordTxt3X, coordTxt3Y, fontSize1, RAYWHITE);

		DrawText("To back to menu, press the key: M", coordTxt4X, coordTxt4Y, fontSize1, RAYWHITE);
	}

	void InstructionsScreen() 
	{
		InputInstructions();
		DrawTextInstructions();
	}
}
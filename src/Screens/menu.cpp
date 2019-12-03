#include "menu.h"

#include "raylib.h"

#include "game.h"
#include "gameplay.h"

namespace Game 
{
	static int fontSize1 = 20;
	static int fontSize2 = 30;

	static int coordTxtY = 140;

	static int coordTxt2Y = 200;

	static int coordTxt3Y = 240;

	static int coordTxt4Y = 280;

	void InputMenu() 
	{
		if (IsKeyDown(KEY_ENTER))
		{
			gameState = GameState::Game;
		}
		if (IsKeyDown(KEY_H))
		{
			gameState = GameState::Instructions;
		}
	}

	void DrawTextMenu() 
	{
		DrawText("Happy Flappy V0.1", static_cast<int>(screenWidth / 3), coordTxtY, fontSize2, GREEN);
		DrawText("To Play the game, press the key: ENTER", static_cast<int>(screenWidth / 4), coordTxt2Y, fontSize1, RAYWHITE);
		DrawText("How To play, press the key: H", static_cast<int>(screenWidth / 4), coordTxt3Y, fontSize1, RAYWHITE);
		DrawText("To Exit, press the key: ESCAPE", static_cast<int>(screenWidth / 4), coordTxt4Y, fontSize1, RAYWHITE);
	}

	void MenuScreen()
	{
		InputMenu();
		DrawTextMenu();
	}
}
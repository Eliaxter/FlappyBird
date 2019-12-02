#include "final_menu.h"

#include "raylib.h"

#include "game.h"
#include "gameplay.h"

namespace Game 
{
	static int fontSize = 20;

	static int coordTxtX = 300;
	static int coordTxtY = 160;

	static int coordTxt2X = 300;
	static int coordTxt2Y = 200;

	static int coordTxt3X = 300;
	static int coordTxt3Y = 220;

	static int coordTxt4X = 300;
	static int coordTxt4Y = 240;

	void InputFinalMenu() 
	{
		if (IsKeyDown(KEY_Y))
		{
			gameState = GameState::Game;
			InitGame();
		}
		if (IsKeyDown(KEY_N))
		{
			gameState = GameState::CloseAll;
		}
		if (IsKeyDown(KEY_M))
		{
			gameState = GameState::StartMenu;
		}
		if (IsKeyDown(KEY_C))
		{
			gameState = GameState::Credits;
		}
	}

	void DrawTextFinalMenu() 
	{
		DrawText("End of Game!", coordTxtX, coordTxtY, fontSize, RAYWHITE);

		DrawText("Play Again: Y/N", coordTxt2X, coordTxt2Y, fontSize, RAYWHITE);

		DrawText("Return to Main Menu: M", coordTxt3X, coordTxt3Y, fontSize, RAYWHITE);

		DrawText("Credits: C", coordTxt4X, coordTxt4Y, fontSize, RAYWHITE);
	}

	void FinalMenuScreen()
	{
		InputFinalMenu();
		DrawTextFinalMenu();
	}
}
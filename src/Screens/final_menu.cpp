#include "final_menu.h"

#include "raylib.h"

#include "game.h"
#include "gameplay.h"
#include "gameobjects/player.h"

namespace Game 
{
	static int fontSize = 20;
	static int fontSize2 = 30;
	static int fontSize3 = 50;

	static int coordTxtX = 200;
	static int coordTxtY = 100;

	static int coordTxt2X = 240;
	static int coordTxt2Y = 160;

	static int coordTxt3X = 260;
	static int coordTxt3Y = 220;

	static int coordTxt4X = 260;
	static int coordTxt4Y = 260;

	static int coordTxt5X = 260;
	static int coordTxt5Y = 300;

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
		DrawText("End of Game!", coordTxtX, coordTxtY, fontSize3, GRAY);

		DrawText(TextFormat("Points Earned: %i", player.points), coordTxt2X, coordTxt2Y, fontSize2, GREEN);

		DrawText("Play Again: Y/N", coordTxt3X, coordTxt3Y, fontSize, RAYWHITE);

		DrawText("Return to Main Menu: M", coordTxt4X, coordTxt4Y, fontSize, RAYWHITE);

		DrawText("Credits: C", coordTxt5X, coordTxt5Y, fontSize, RAYWHITE);
	}

	void FinalMenuScreen()
	{
		InputFinalMenu();
		DrawTextFinalMenu();
	}
}
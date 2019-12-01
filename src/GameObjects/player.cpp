#include "player.h"

#include "raylib.h"

#include "screens/game.h"

namespace Game
{
	Player player;

	void InitPlayer() 
	{
		player.rec.x = 100.0f;
		player.rec.y = 250.0f;
		player.rec.width = 50.0f;
		player.rec.height = 50.0f;
		player.lifes = 3;
		player.points = 0;
		player.isAlive = true;
	}

	void MovePlayer() 
	{
		player.rec.y += 200.0f * GetFrameTime();
		if (IsKeyDown(KEY_SPACE))
		{
			player.rec.y -= 600.0f * GetFrameTime();
		}
	}
	
	void DrawPlayer() 
	{
		DrawRectangle(static_cast<int>(player.rec.x), static_cast<int>(player.rec.y), static_cast<int>(player.rec.width), static_cast<int>(player.rec.height), WHITE);
	}

	void LimitWithScreen()
	{
		if ((player.rec.y) <= minScreenHeight)
		{
			player.rec.y = static_cast<float>(minScreenHeight);
		}
		if ((player.rec.y + player.rec.height) >= screenHeight)
		{
			player.rec.y = static_cast<float>(screenHeight) - player.rec.height;
		}
	}
}
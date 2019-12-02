#include "pipes.h"

#include "raylib.h"

#include "screens/game.h"
#include "player.h"

namespace Game
{
	const int sizePipes = 6;
	Pipes tube[sizePipes] = { 0 };

	static int playerWidth = 80;
	static int pipesDistance = 200;

	void InitPipes()
	{
		tube[0].rec.x = 400.0f;
		tube[0].rec.y = 0.0f;
		tube[0].rec.width = 80.0f;
		tube[0].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
		tube[1].rec.x = 400.0f;
		tube[1].rec.y = tube[0].rec.height + pipesDistance;
		tube[1].rec.width = 80.0f;
		tube[1].rec.height = screenHeight - tube[0].rec.height + pipesDistance;

		tube[2].rec.x = 700.0f;
		tube[2].rec.y = 0.0f;
		tube[2].rec.width = 80.0f;
		tube[2].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
		tube[3].rec.x = 700.0f;
		tube[3].rec.y = tube[2].rec.height + pipesDistance;
		tube[3].rec.width = 80.0f;
		tube[3].rec.height = screenHeight - tube[2].rec.height + pipesDistance;

		tube[4].rec.x = 1000.0f;
		tube[4].rec.y = 0.0f;
		tube[4].rec.width = 80.0f;
		tube[4].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
		tube[5].rec.x = 1000.0f;
		tube[5].rec.y = tube[4].rec.height + pipesDistance;
		tube[5].rec.width = 80.0f;
		tube[5].rec.height = screenHeight - tube[4].rec.height + pipesDistance;
	}

	void MovePipes()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			tube[i].rec.x -= 300.0f * GetFrameTime();
		}
	}

	void PipesOutOfScreen()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			if (tube[i].rec.x <= minScreenWidth - playerWidth && tube[i + 1].rec.x <= minScreenWidth - playerWidth)
			{
				tube[i].rec.x = screenWidth;
				tube[i].rec.y = 0.0f;
				tube[i].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
				i++;
				tube[i].rec.x = screenWidth;
				tube[i].rec.y = tube[i - 1].rec.height + pipesDistance;
				tube[i].rec.height = screenHeight - tube[i - 1].rec.height + pipesDistance;
				player.points++;
				PlaySound(pointSFX);
			}
		}
	}

	void DrawPipes()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			DrawRectangle(static_cast<int>(tube[i].rec.x), static_cast<int>(tube[i].rec.y), static_cast<int>(tube[i].rec.width), static_cast<int>(tube[i].rec.height), GREEN);
		}
	}
}
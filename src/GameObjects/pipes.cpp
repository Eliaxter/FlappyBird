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
		tube[0].rec.x = 300.0f;
		tube[0].rec.y = 0.0f;
		tube[0].rec.width = 80.0f;
		tube[0].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
		tube[1].rec.x = 300.0f;
		tube[1].rec.y = tube[0].rec.height + pipesDistance;
		tube[1].rec.width = 80.0f;
		tube[1].rec.height = screenHeight - tube[0].rec.height + pipesDistance;

		tube[2].rec.x = 600.0f;
		tube[2].rec.y = 0.0f;
		tube[2].rec.width = 80.0f;
		tube[2].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
		tube[3].rec.x = 600.0f;
		tube[3].rec.y = tube[2].rec.height + pipesDistance;
		tube[3].rec.width = 80.0f;
		tube[3].rec.height = screenHeight - tube[2].rec.height + pipesDistance;

		tube[4].rec.x = 900.0f;
		tube[4].rec.y = 0.0f;
		tube[4].rec.width = 80.0f;
		tube[4].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
		tube[5].rec.x = 900.0f;
		tube[5].rec.y = tube[4].rec.height + pipesDistance;
		tube[5].rec.width = 80.0f;
		tube[5].rec.height = screenHeight - tube[4].rec.height + pipesDistance;
	}

	void MovePipes()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			tube[i].rec.x -= 400.0f * GetFrameTime();
		}
	}

	void PipesOutOfScreen()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			if (tube[0].rec.x <= minScreenWidth - playerWidth && tube[1].rec.x <= minScreenWidth - playerWidth)
			{
				tube[0].rec.x = screenWidth;
				tube[0].rec.y = 0.0f;
				tube[0].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
				tube[1].rec.x = screenWidth;
				tube[1].rec.y = tube[0].rec.height + pipesDistance;
				tube[1].rec.height = screenHeight - tube[0].rec.height + pipesDistance;
			}
			if (tube[2].rec.x <= minScreenWidth - playerWidth && tube[3].rec.x <= minScreenWidth - playerWidth)
			{
				tube[2].rec.x = screenWidth;
				tube[2].rec.y = 0.0f;
				tube[2].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
				tube[3].rec.x = screenWidth;
				tube[3].rec.y = tube[2].rec.height + pipesDistance;
				tube[3].rec.height = screenHeight - tube[2].rec.height + pipesDistance;

			}
			if (tube[4].rec.x <= minScreenWidth - playerWidth && tube[5].rec.x <= minScreenWidth - playerWidth)
			{
				tube[4].rec.x = screenWidth;
				tube[4].rec.y = 0.0f;
				tube[4].rec.height = GetRandomValue(0, screenHeight - player.rec.height * 2);
				tube[5].rec.x = screenWidth;
				tube[5].rec.y = tube[4].rec.height + pipesDistance;
				tube[5].rec.height = screenHeight - tube[4].rec.height + pipesDistance;
			}
		}
	}

	void DrawPipes()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			DrawRectangle(static_cast<int>(tube[0].rec.x), static_cast<int>(tube[0].rec.y), static_cast<int>(tube[0].rec.width), static_cast<int>(tube[0].rec.height), GREEN);
			DrawRectangle(static_cast<int>(tube[1].rec.x), static_cast<int>(tube[1].rec.y), static_cast<int>(tube[1].rec.width), static_cast<int>(tube[1].rec.height), GREEN);
			DrawRectangle(static_cast<int>(tube[2].rec.x), static_cast<int>(tube[2].rec.y), static_cast<int>(tube[2].rec.width), static_cast<int>(tube[2].rec.height), GREEN);
			DrawRectangle(static_cast<int>(tube[3].rec.x), static_cast<int>(tube[3].rec.y), static_cast<int>(tube[3].rec.width), static_cast<int>(tube[3].rec.height), GREEN);
			DrawRectangle(static_cast<int>(tube[4].rec.x), static_cast<int>(tube[4].rec.y), static_cast<int>(tube[4].rec.width), static_cast<int>(tube[4].rec.height), GREEN);
			DrawRectangle(static_cast<int>(tube[5].rec.x), static_cast<int>(tube[5].rec.y), static_cast<int>(tube[5].rec.width), static_cast<int>(tube[5].rec.height), GREEN);
		}
	}
}
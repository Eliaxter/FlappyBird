#include "pipes.h"

#include "raylib.h"

#include "screens/game.h"

namespace Game
{
	const int sizePipes = 4;
	Pipes tube[sizePipes] = { 0 };

	void InitPipes()
	{
		for (int i = 0; i < sizePipes; i++)
		{
			tube[0].rec.x = 300.0f;
			tube[0].rec.y = 0.0f;
			tube[0].rec.width = 80.0f;
			tube[0].rec.height = 250.0f; //0 a 250

			tube[1].rec.x = 300.0f;
			tube[1].rec.y = 400.0f;
			tube[1].rec.width = 80.0f;
			tube[1].rec.height = 50.0f;//50 a 250

			tube[2].rec.x = 600.0f;
			tube[2].rec.y = 0.0f;
			tube[2].rec.width = 80.0f;
			tube[2].rec.height = 50.0f; //50 a 250

			tube[3].rec.x = 600.0f;
			tube[3].rec.y = 200.0f;
			tube[3].rec.width = 80.0f;
			tube[3].rec.height = 250.0f; // 0 a 250

		}
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
			if (tube[0].rec.x <= minScreenWidth && tube[1].rec.x <= minScreenWidth)
			{
				tube[0].rec.x = 800.0f;
				tube[0].rec.height = GetRandomValue(0, 250);
				tube[1].rec.x = 800.0f;
				tube[1].rec.height = GetRandomValue(50, 250);
			}
			if (tube[2].rec.x <= minScreenWidth && tube[3].rec.x <= minScreenWidth)
			{
				tube[2].rec.x = 1100.0f;
				tube[2].rec.height = GetRandomValue(50, 250);
				tube[3].rec.x = 1100.0f;
				tube[3].rec.height = GetRandomValue(0, 250);
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
		}
	}
}
#ifndef PIPES_H
#define PIPES_H

#include "raylib.h"

namespace Game
{
	struct Pipes 
	{
		Rectangle rec;
		Texture2D sprite;
	};

	extern Pipes tube;

	void InitPipes();
	void DrawPipes();
}

#endif
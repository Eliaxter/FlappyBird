#include "raylib.h"

int main() 
{
	InitWindow(1280, 720, "Flappy");
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		EndDrawing();
	}
	return 0;
}
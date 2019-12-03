#include "gameplay.h"

#include "raylib.h"

#include "game.h"
#include "gameobjects/player.h"
#include "gameobjects/pipes.h"

namespace Game
{
	const int screenWidth = 800;
	const int screenHeight = 450;
	int minScreenWidth = 0;
	int minScreenHeight = 0;

	Texture2D background;

	Vector2 playerPosition;
	Rectangle frameRec;
	float currentFrame = 0.0f;
	float framesCounter = 0.0f;

	float maxCounter = 0.5f;

	bool pause = false;

	static int halfScreenWidth = screenWidth / 2;
	static int halfScreenHeight = screenHeight / 2;
	static int fontSizePause = 50;

	static int coordPointsX = 20;
	static int coordPointsY = 50;
	static int pointsTextSize = 20;

	static int coordMuteX = 200;
	static int coordMuteY = 50;
	static int pointsMuteSize = 20;

	static int coordUnmuteX = 400;
	static int coordUnmuteY = 50;
	static int pointsUnmuteSize = 20;

	static int coordPauseX = 600;
	static int coordPauseY = 50;
	static int pointsPauseSize = 20;

	void InitWindowGame() 
	{
		InitWindow(screenWidth, screenHeight, "Happy Flappy -V1.0");
		InitAudioDevice();
		InitGame();
	}

	void InitGame() 
	{
		InitPlayer();
		InitPipes();
		player.points = 0;
		background = LoadTexture("assets/sprites/bg-large-1.png");
		SetMasterVolume(1);
	}

	void GamePlayScreen()
	{
		Update();
		Draw();
	}

	void MuteAll()
	{
		if (IsKeyDown(KEY_M))
		{
			SetMasterVolume(0);
		}
		if (IsKeyDown(KEY_A))
		{
			SetMasterVolume(1);
		}
	}

	void PauseGame()
	{
		if (IsKeyPressed(KEY_P))
		{
			pause = true;
		}
	}

	void Update() 
	{
		if (pause == false)
		{
			MovePlayer();
			LimitWithScreen();
			MovePipes();
			PipesOutOfScreen();
			CollisionPlayerWithPipes();
			MuteAll();
			PauseGame();
		}
		else
		{
			DrawText("GAME PAUSED", halfScreenWidth, halfScreenHeight, fontSizePause, WHITE);
			if (IsKeyPressed(KEY_P))
			{
				pause = false;
			}
		}
		
	}

	void Draw() 
	{
		ClearBackground(BLACK);
		DrawTexture(background, minScreenWidth, minScreenHeight, WHITE);
		DrawPlayer();
		DrawPipes();
		DrawText(TextFormat("Points: %i", player.points), coordPointsX, coordPointsY, pointsTextSize, WHITE);
		DrawText("Mute Audio: M", coordMuteX, coordMuteY, pointsMuteSize, WHITE);
		DrawText("Unmute Audio: A", coordUnmuteX, coordUnmuteY, pointsUnmuteSize, WHITE);
		DrawText("Pause Game: P", coordPauseX, coordPauseY, pointsPauseSize, WHITE);

	}
}
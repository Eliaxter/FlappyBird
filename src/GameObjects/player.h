#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

namespace Game
{
	struct Player 
	{
		Rectangle rec;
		int lifes;
		int points;
		float speed;
		float gravity;
		bool isAlive;
		Texture2D sprite;
	};

	extern Player player;

	void InitPlayer();
	void MovePlayer();
	void DrawPlayer();
	void LimitWithScreen();
	void CollisionPlayerWithPipes();
}

#endif
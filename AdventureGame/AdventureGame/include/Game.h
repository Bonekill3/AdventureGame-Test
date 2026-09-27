#pragma once

#include "Player.h"
#include "Room.h"

class Game {
private:
	Player player;
	Room currentRoom;

	bool isRunning;

public:
	Game();
	void start();
	void handleInput();
	void update();
};
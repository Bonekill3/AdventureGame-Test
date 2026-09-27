#pragma once

class Room {
private:
	int roomX;
	int roomY;
	
public:
	Room(int x, int y);

	void drawRoom() const;

	int getRoomX() const;
	int getRoomY() const;
};
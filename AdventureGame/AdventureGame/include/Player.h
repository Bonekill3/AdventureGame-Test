#pragma once

class Player {
private:
	int x;
	int y;
public:
	Player(int startX, int startY);
	
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	int getX() const;
	int getY() const;

	void setPosition(int newX, int newY);
	
};
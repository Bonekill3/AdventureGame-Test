#include <iostream>
#include "Player.h"
using namespace std;

Player::Player() {
	x = 1;
	y = 1;
}

void Player::moveUp() {
	y--;
}

void Player::moveDown() {
	y++;
}

void Player::moveLeft() {
	x--;
}

void Player::moveRight() {
	x++;
}

int Player::getX() const {
	return x;
}

int player::getY() const {
	return y;
}

void Player::setPosition(int newX, int newY) {
	x = newX;
	y = newY;
}
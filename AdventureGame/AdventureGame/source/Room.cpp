#include <iostream>
#include "Room.h"
using namespace std;

Room::Room() {
	board = {// Define the room layout
        "####################",
        "#..................#",
        "#..................#",
        "#..................#",
        "#..................#",
        "#..................#",
        "#..................#",
        "#..................#",
        "#########..#########"
    };

    void Room::drawRoom() const {// Draw the room to the console
        for (const auto& row : board) {
            cout << row << endl;
        }
    }

    bool Room::isWalkable(int x, int y) const {
        if (y < 0 || y >= board.size() || x < 0 || x >= board[y].size()) {
            return false; // Out of bounds
        }
        return board[y][x] == '.'; // Walkable if it's a '.'

    }
}
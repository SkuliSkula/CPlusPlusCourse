// Ex3Maze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
typedef enum { wood, stone, door } material;

typedef struct {
	int x, y;
	bool isWall;
	material type;
}field;

#define n 12
#define m 16
field playground[n][m];

int X = 5;
int Y = 5;

// The position of the gap where the player can go through
int XD = 0; 
int YD = 0;

using namespace std;

void currentSituation()
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (playground[i][j].type == stone) {
				cout << '*';
			}
			else if (playground[i][j].x == X && playground[i][j].y == Y)
				cout << 'O';
			else if (playground[i][j].type == wood)
				cout << ' ';
		}
		cout << endl;
	}
}

bool foundExit() {
	return playground[X][Y].x == XD && playground[X][Y].y == YD;
}

void movePlayer(char ch)
{
	if (ch == 'l') {
		Y--;
		if (Y < 1)
			Y = 1;
	}

	else if (ch == 'r') {
		Y++;
		if (Y == (m - 1))
			Y = m - 2;
	}

	else if (ch == 'u') {
		X--;
		if (foundExit()) {
			X = 0;
		}
		if (X < 1 && !foundExit())
			X = 1;
	}
	else if (ch == 'd') {
		X++;
		if (X == (n - 1))
			X = n - 2;
	}

}

void initBoard() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			playground[i][j].x = i;
			playground[i][j].y = j;
			playground[i][j].isWall = (i == 0 || i == (n - 1) || (j == 0 && j != 3) || j == (m - 1));
			if (playground[i][j].isWall && !(j == 3 && i == 0)) {
				playground[i][j].type = stone;
			}
			else if (j == 3 && i == 0) {
				XD = i;
				YD = j;
			}
			else
			{
				playground[i][j].type = wood;
			}
		}
	}
}

int main()
{
	initBoard();
	char input;

	do {
		currentSituation();
		cin >> input;
		switch (input)
		{
		case 'l':
			movePlayer('l');
			break;
		case 'r':
			movePlayer('r');
			break;
		case 'u':
			movePlayer('u');
			break;
		case 'd':
			movePlayer('d');
			break;
		default:
			break;
		}
	} while (input != 'q');

	return 0;
}


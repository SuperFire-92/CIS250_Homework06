#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Maze
{
private:
	char maze[40][40];
	//Two ints to store wherever the start of the maze is
	int startPos[2];
public:
	Maze();
	void readTextFile(string);
	void displayMaze();

	bool completeMaze();
	bool completeMaze(int, int);

	void clearMistakes();
};


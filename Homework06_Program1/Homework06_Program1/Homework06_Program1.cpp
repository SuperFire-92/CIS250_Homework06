//===========================================
//Name: Nicolaas Dyk
//Date: 04-17-2023
//Desc: Using recursion to brute force solve
//      a maze
//===========================================

#include <iostream>
#include "Maze.h"

using namespace std;

int main()
{
    //Make a maze
    Maze maze;

    //Assign the maze to become whatever is contained in the given text file
    maze.readTextFile("Maze.txt");
    //Display the maze in it's unsolved state
    maze.displayMaze();

    //Go through the maze and attempt to find a solution
    if (maze.completeMaze())
    {
        //If a solution is found, clear out the x's and display the solution
        maze.clearMistakes();
        cout << "==============================" << endl;
        cout << "Solution Found" << endl;
        cout << "==============================" << endl;
        maze.displayMaze();
    }
    else
    {
        //If no solution is found, inform the user
        cout << "==============================" << endl;
        cout << "No Solution Found" << endl;
        cout << "==============================" << endl;
    }
    
}
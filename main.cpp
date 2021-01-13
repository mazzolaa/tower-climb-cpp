/*
*Author: Anthony Mazzola
*Email: mazzolaa@oregonstate.edu
*Date: 12/10/2019
*Description: Main file for Final Project.
*/

#include <iostream>

#include "space.hpp"
#include "menu.hpp"
#include "game.hpp"


using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "\nYou find yourself staring up at a tall tower.\n"
		 << "You want to find out if the rumors of a Great Treasure locked away in the highest room are true.\n"
		 << "Armed with only your wits you prepare yourself to enter the mysterious structure."
		 << "\nYou enter the tower and the front door slams and locks behind you.\n"
		 << "Turning back is no longer an option. Get to the top floor and defeat the monster guarding the treasure.\n";


	Game tower; //Create a game object

	tower.playGame();


	cout << "\nThank you for playing.\n";
	system("pause");
	return 0;
}

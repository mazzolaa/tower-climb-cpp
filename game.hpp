/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Header file for Game class.
***/


#ifndef GAME_HPP
#define GAME_HPP

#include "character.hpp"
#include "space.hpp"
#include "emptySpace.hpp"
#include "enemySpace.hpp"
#include "itemSpace.hpp"
#include "menu.hpp"


class Game
{
private:
	Space *sp1, *sp2, *sp3, *sp4, *sp5, *sp6;
	Character* player; //Create player's character

	bool win, loss;
	int moveLimit;

public:
	Game();
	~Game();
	void playGame();
};
#endif

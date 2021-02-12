/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Description: Source file for Game class.
***/


#include "game.hpp"

/***********
* 		Game::Game()
* Description: Default Constructor. Build the structure of
* Spaces where the game will be played and establish other necessary
* elements needed for each play through.
*********/
Game::Game()
{
	//set move limit to 20 moves (room changes)
	moveLimit = 20;

	win = false;
	loss = false;

	player = new Character;

	//Create derived space objects that make up the structure and link appropriately.
	sp1 = new EmptySpace("1st Floor: Entrance");
	sp2 = new ItemSpace("2nd Floor: Library", "key");
	sp3 = new EmptySpace("3rd Floor: Maid's Quarters");
	sp4 = new EmptySpace("4th Floor: Ball Pit");
	sp5 = new ItemSpace("5th Floor: Armory", "sword");
	sp6 = new EnemySpace("Top Floor: Final Area (Warning! No Turning Back!)");

	//Linking Spaces
	sp1->setTop(sp2);
	sp1->setBottom(NULL);
	sp1->setLeft(NULL);
	sp1->setRight(NULL);

	sp2->setTop(sp3);
	sp2->setBottom(sp1);
	sp2->setLeft(NULL);
	sp2->setRight(NULL);

	sp3->setTop(sp4);
	sp3->setBottom(sp2);
	sp3->setLeft(NULL);
	sp3->setRight(NULL);

	sp4->setTop(sp5);
	sp4->setBottom(sp3);
	sp4->setLeft(NULL);
	sp4->setRight(NULL);

	sp5->setTop(sp6);
	sp5->setBottom(sp4);
	sp5->setLeft(NULL);
	sp5->setRight(NULL);

	sp6->setTop(NULL);
	sp6->setBottom(sp5);
	sp6->setLeft(NULL);
	sp6->setRight(NULL);


	//Place character at starting position
	player->setCharSpace(sp1);

	//cout << "character placed\n";
	
}


void Game::playGame()
{
	//loop while win == false, lose == false (move limit at zero = loss, died of starvation?)
	while (win == false && loss == false)
	{
		//set off event of current room
		player->getCharSpace()->roomEvent(player);

		//tell the player where they are (space name)
		//cout << "You are currently on the " << player->getCharSpace()->getName() << ".\n";

		//tell them where they can go, up or down (menu)...go there if option is not null
		//take user input, move character appropriately (subtract from move limit)
		int choice;     //holds choice of action
		//cout << "\nWhere would you like to go?\n";
		if (player->getCharSpace()->getBottom() == NULL)
		{
			cout << "You are currently on the " << player->getCharSpace()->getName() << ".\n";
			cout << "\nWhere would you like to go?\n";

			cout << "1.)Up to the next floor: " << player->getCharSpace()->getTop()->getName() << " \n";
			choice = validation(1, 1);
		}
		else if (player->getCharSpace()->getTop() == NULL)
		{
			//Top Floor is reached. Player status is set in interaction.
			choice = 3;

		}
		else
		{
			cout << "You are currently on the " << player->getCharSpace()->getName() << ".\n";
			cout << "\nWhere would you like to go?\n";

			cout << "1.)Up to the next floor: " << player->getCharSpace()->getTop()->getName() << " \n";
			cout << "2.)Down to the previous floor: " << player->getCharSpace()->getBottom()->getName() << " \n";
			choice = validation(1, 2);
		}

		if (choice == 1)
		{
			player->setCharSpace(player->getCharSpace()->getTop()); //move character up to next floor
		}
		else if (choice == 2)
		{
			player->setCharSpace(player->getCharSpace()->getBottom()); //move character down to last floor
		}
		else
		{
			win = true;
		}

		//need to set win or loss via final boss action

		//counter for turns is moved and checked
		moveLimit--;
		if (moveLimit <= 0)
		{
			cout << "\nYou have collapsed due to exhaustion.\n";
			player->setDead(true);
			loss = true;
		}

	}
	
	if (player->getDead() == true)
	{
		cout << "\nYour adventure is over.\n";
	}
	else
	{
		cout << "\nYou kick the monster to make sure it has truly been slain. No sign of life.\n"
			<< "Across the room a chest with a glimmer of golden light radiating from within catches your eye.\n"
			<< "You move quickly, opening the chest to receive your reward.\n"
			<< "Inside you find enough gold coins to live comfortably for the rest of your days.\n"
			<< "Congratulations!\n";
	}


}



//Destructor
Game::~Game()
{
	delete sp1;
	delete sp2;
	delete sp3;
	delete sp4;
	delete sp5;
	delete sp6;

	delete player;
}

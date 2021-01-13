/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Source file for EnemySpace class.
***/

#include "enemySpace.hpp"

using std::cout;

//Constructor
EnemySpace::EnemySpace()
{

}


/***********
* 		EnemySpace::EnemySpace()
* Description: Constructor.
*********/
EnemySpace::EnemySpace(string name)
{	
	this->name = name;
}


/***********
* 		void EnemySpace::roomEvent()
* Description: Handle event specific to room type.
* Player will fight the enemy in the room. Check for sword in inventory.
* If the player has the sword the player will win the fight, else the player
* is defeated.
*********/
void EnemySpace::roomEvent(Character* Player)
{
	cout << "\nYou enter the top room of the tower to find a hideous monster.\n"
		<< "The monster wastes no time and lunges to attack you.\n";

	//if character has sword
	if (Player->hasItem("sword") == true)
	{
		cout << "You unsheath your sword just in time and cut down the monster.\n";
		Player->setDead(false);
	}
	else //character did not get sword
	{
		cout << "You are caught off guard and unarmed. The monster defeats you.\n";
		Player->setDead(true);
	}

}

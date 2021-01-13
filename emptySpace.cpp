/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Source file for EmptySpace class.
***/

#include "emptySpace.hpp"

using std::cout;

//Constructor



/***********
* 		EmptySpace::EmptySpace()
* Description: Constructor.
*********/
EmptySpace::EmptySpace(string name)
{
	this->name = name;

}


/***********
* 		void ItemSpace::roomEvent()
* Description: Handle event specific to room type.
* Room is empty. Print text to screen.
*********/
void EmptySpace::roomEvent(Character* Player)
{
	cout << "\nYou have entered a seemingly empty room.\n";
}

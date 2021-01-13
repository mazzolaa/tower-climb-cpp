/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Source file for ItemSpace class.
***/

#include "itemSpace.hpp"

using std::cout;

//Constructor
ItemSpace::ItemSpace()
{

}


/***********
* 		ItemSpace::ItemSpace()
* Description: Constructor.
*********/
ItemSpace::ItemSpace(string name,string item)
{
	this->name = name;
	this->item = item;

	gotItem = false;
}


/***********
* 		void ItemSpace::roomEvent()
* Description: Handle event specific to room type.
* Player will choose whether or not to pick up an item found in the room
*********/
void ItemSpace::roomEvent(Character* Player)
{
	if (gotItem == false) //If the item has not been removed yet
	{
		cout << "\nYou notice the room is empty except for a " << item
			<< " on a nearby table.\n"
			<< "Do you want to take this item with you?\n"
			<< "\n1.)Pick up the " << item << "\n"
			<< "2.)Leave the " << item << " where it is.\n";

		int choice = validation(1, 2);

		if (choice == 1) //user takes item
		{
			cout << "\nYou add the " << item << " to your inventory.\n";
			Player->addItem(item);
			gotItem = true;
		}
		else  //user chooses not to take item
		{
			cout << "\nYou leave behind the " << item << ".\n";
		}
	}
	else   //User has already taken the item
	{
		cout << "\nThis room contains only a table with the dust outline of a " << item << ". \n";
	}

}

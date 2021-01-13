/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Header file for ItemSpace class.
***/


#ifndef ITEM_SPACE_HPP
#define ITEM_SPACE_HPP

//#include "character.hpp"
#include "space.hpp"

class ItemSpace : public Space
{
private:
	string item;
	bool gotItem;

public:
	ItemSpace();
	ItemSpace(string,string);        // constructor

	virtual void roomEvent(Character*);  //will handle special event based on room type
};
#endif 

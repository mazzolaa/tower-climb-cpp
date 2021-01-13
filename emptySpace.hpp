/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Date: 12/10/2019
* Description: Header file for EmptySpace class.
***/


#ifndef EMPTY_SPACE_HPP
#define EMPTY_SPACE_HPP

//#include "character.hpp"
#include "space.hpp"

class EmptySpace : public Space
{
private:

public:
	EmptySpace();
	EmptySpace(string);        // constructor


	virtual void roomEvent(Character*);  //will handle special event based on room type
};
#endif 

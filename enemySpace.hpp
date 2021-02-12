/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Description: Header file for EnemySpace class.
***/


#ifndef ENEMY_SPACE_HPP
#define ENEMY_SPACE_HPP

//#include "character.hpp"
#include "space.hpp"

class EnemySpace : public Space
{
private:

public:
	EnemySpace();
	EnemySpace(string);        // constructor

	virtual void roomEvent(Character*);  //will handle special event based on room type
};
#endif 

/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Description: Header file for Space class.
***/

#include "space.hpp"


/***********
* 		Space::Space()
* Description: Default Constructor.
*********/
Space::Space()
{
	top = NULL;
	bottom = NULL;
	left = NULL;
	right = NULL;

	name = " ";
}

/***********
* 		Space::~Space()
* Description: Destructor.
*********/
Space::~Space()
{

}


/***********
* 		Space::setTop()
* Description: Set top pointer.
*********/
void Space::setTop(Space* top)
{
	this->top = top;
}

/***********
* 		Space::setBottom()
* Description: Set bottom pointer.
*********/
void Space::setBottom(Space* bottom)
{
	this->bottom = bottom;
}

/***********
* 		Space::setLeft()
* Description: Set left pointer.
*********/
void Space::setLeft(Space* left)
{
	this->left = left;
}

/***********
* 		Space::setRight()
* Description: Set right pointer.
*********/
void Space::setRight(Space* right)
{
	this->right = right;
}





/***********
* 		Space::getTop()
* Description: Return top pointer.
*********/
Space* Space::getTop()
{
	return top;
}

/***********
* 		Space::getBottom()
* Description: Return bottom pointer.
*********/
Space* Space::getBottom()
{
	return bottom;
}

/***********
* 		Space::getLeft()
* Description: Return left pointer.
*********/
Space* Space::getLeft()
{
	return left;
}

/***********
* 		Space::getRight()
* Description: Return right pointer.
*********/
Space* Space::getRight()
{
	return right;
}



//Return name of space
string Space::getName()
{
	return name;
}
//Set name of space
void Space::setName(string name)
{
	this->name = name;
}

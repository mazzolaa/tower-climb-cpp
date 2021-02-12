/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Description: Header file for Space class.
***/


#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include <string>
using std::string;

#include "character.hpp"
#include "menu.hpp"

class Character;

class Space
{
	protected:
		Space* top;       //point to room above
		Space* bottom;	  //point to room below
		Space* left;     //point to left room
		Space* right;    //point to right room
		
		string name;    //name of the room/floor

	public:
		Space();    	    //default constructor
		virtual ~Space();       //default destructor

		virtual void roomEvent(Character*) = 0;  //will handle special event based on room type

		void setTop(Space*);      //set top pointer
		void setBottom(Space*);   //set bottom pointer
		void setLeft(Space*);    //set left pointer
		void setRight(Space*);   //set right pointer

		Space* getTop();   //return top 
		Space* getBottom(); //return bottom
		Space* getLeft();   //return left
		Space* getRight();  //return right
		

		string getName();   //return name of space
		void setName(string);     //set name
};
#endif 

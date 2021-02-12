/*******
* Author: Anthony Mazzola
* Email: mazzolaa@oregonstate.edu
* Description: Source file for menu functions.
***/

#include "menu.hpp"



/******
* 		 int validation(int,int)
* 	Description: Checks for valid integer input within the range specifiec
*   by sent parameters. Uses string stream to check for integer input.
*   Adapted from: http://www.cplusplus.com/forum/beginner/58833/
*****/
int validation(int min, int max)
{
	string input = "";
	int intNum;

	while (true)
	{
		getline(cin, input);
		stringstream stringNum(input);

		if (!(stringNum >> intNum) || (stringNum >> intNum) || intNum < min || intNum > max)
		{
			cout << "\nPlease enter a valid integer in the specified range.\n";
		}
		else
		{
			return intNum;
		}
	}
}

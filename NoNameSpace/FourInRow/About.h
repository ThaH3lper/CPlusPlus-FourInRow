#pragma once
#include "Settings.h"
#include <iostream>
#include <stdlib.h>

/*
* The “About”-class creates a small “About” screen.
*/
class About
{
public:
	
	/*Construktor
	*/
	About(); 
		
	/*Shows the settings
	* @return the settings that you generated
	*/ 
	void ShowAbout();
private:

	About(const About& that);
	About& operator = (const About& that);
};


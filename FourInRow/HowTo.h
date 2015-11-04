#pragma once
#include <string>

namespace GUI
{
	/*
	* The “HowTo”-class creates a small how-to screen with help and guidelines for how to play the game.
	*/
	class HowTo
	{
	public:
		/*Constructor
		*/
		HowTo();

		/*Prints howto Text
		*/
		void PrintHowTo();
	private:
		std::string howtoText;

		HowTo(const HowTo& that);
		HowTo& operator = (const HowTo& that);
	};
}


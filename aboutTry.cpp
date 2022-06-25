#include<iostream>
#include "Success.h"

void whichTry(int try_number)
{
	using namespace std;
	switch (try_number)
	{
	case 1:
		cout << "First try: ";
		break;
	case 2:
		cout << "Second try: ";
		break;
	case 3:
		cout << "Third try: ";
		break;
	case 4:
		cout << "Fourth try: ";
		break;
	case 5:
		cout << "Fifth try: ";
		break;
	case 6:
		cout << "Sixth try: ";
		break;
	case 7:
		cout << "Seventh try: ";
		break;
	}
}

Success resultDecider(int number_guessed, int random_number, int try_number)
{
	if (number_guessed == random_number)
		return SUCCESS_TRUE;
	else
	{
		if (random_number - number_guessed >= 15 || number_guessed - random_number >= 15)
			std::cout << "The difference is too high!!\n";
		else
			std::cout << "You are very near!!\n";
		std::cout << "You have " << 7 - try_number << " chances left\n";
		return SUCCESS_FALSE;
	}
}
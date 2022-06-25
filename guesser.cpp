#include<iostream>
#include "Success.h"

void whichTry(int try_number);
Success resultDecider(int number_guessed, int random_number, int try_number);

Success guesser(int random_number)
{
	using namespace std;
	Success result;
	int try_number, number_guessed;
	cout << "Hey!! Before guessing go through the rules.The rules are the following.\nYou have got 7 chances to guess the right number. You will be frequently notified that how close you are to the right number after each guess.\n";
	cout << "If you were successful in guessing the number before you run out of chances you win the game:) else you lose:(\n";
	cout << "Now start guessing\n";
	for (try_number = 1; try_number <= 7; try_number++)
	{
		whichTry(try_number);
		cin >> number_guessed;
		result = resultDecider(number_guessed, random_number, try_number);
		if (result == 1)
			break;
		else
			continue;
	}
	return result;
}
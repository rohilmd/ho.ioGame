#include<iostream>
#include<string>
#include "Success.h"

int numbersGenerator();
Success guesser(int random_number);

int main()
{
	using namespace std;
	int random_number;
	Success result;
	random_number = numbersGenerator();
	cout << "The number to be gussed is decided....:):)\n";
	cout << "Now you can start guessing\n";
	result = guesser(random_number);
	if (result == SUCCESS_TRUE)
		cout << "You have won!!";
	else
	{
		cout << "You have lost!! Better luck next time\n";
		cout << "The correct number was " << random_number;
	}
	return 0;
}
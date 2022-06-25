#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

int numbersGenerator()
{
	int number;
	using namespace std;
	srand(static_cast<unsigned int>(time(nullptr)));
	number = 1 + rand() % 99;
	return number;
}
//#include <stdio.h> //Unused
#include <iostream>
//using namespace std; //REMOVED FOR PRACTICE
int main()
{
	std::string val1{};
	std::cout << "Enter Number 0-4 in English(lowercase) to convert to digit \n";
	std::cin >> val1;

	if (val1 == "zero")
	{
		std::cout << "Number is 0\n";
	}

	else if (val1 == "one")
	{
		std::cout << "Number is 1\n";
	}
	else if (val1 == "two")
	{
		std::cout << "Number is 2\n";
	}
	else if (val1 == "three")
	{
		std::cout << "Number is 3\n";
	}
	else if (val1 == "four")
	{
		std::cout << "Number is 4\n";
	}
	else
	{
		std::cout << "Not a number I know\n";
	}

	system("pause"); //For certain consoles that force close after runtime
	return 0;
}
//#include <stdio.h> //Unused
#include <iostream>
//using namespace std; //REMOVED FOR PRACTICE
int main()
{
	int pennies{}, nickels{}, dimes{}, quarters{}, half_dollars{},sum{};


	std::cout << "How many pennies do you have?\n";
	std::cin >> pennies;

	std::cout << "How many nickels do you have?\n";
	std::cin >> nickels;

	std::cout << "How many dimes do you have?\n";
	std::cin >> dimes;

	std::cout << "How many quarters do you have?\n";
	std::cin >> quarters;

	std::cout << "How many half_dollars do you have?\n";
	std::cin >> half_dollars;

	if(pennies>1)
		std::cout << "You have "<< pennies << " pennies\n";
	else
		std::cout << "You have " << pennies << " penny\n";

	if (nickels > 1)
		std::cout << "You have " << nickels << " nickels\n";
	else
		std::cout << "You have " << nickels << " nickel\n";

	if (dimes > 1)
		std::cout << "You have " << dimes << " dimes\n";
	else
		std::cout << "You have " << dimes << " dime\n";

	if (quarters > 1)
		std::cout << "You have " << quarters << " quarters\n";
	else
		std::cout << "You have " << quarters << " quarter\n";

	if (half_dollars > 1)
		std::cout << "You have " << half_dollars << " half dollars\n";
	else
		std::cout << "You have " << half_dollars << " half dollar\n";

	sum = pennies + nickels*5 + dimes*10 + quarters*25 + half_dollars*50;
	std::cout << "The value of all of your coins is " << sum << " cents.\n";


	system("pause"); //For certain consoles that force close after runtime
	return 0;
}

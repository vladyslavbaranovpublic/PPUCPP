//#include <stdio.h> //Unused
#include <iostream>
//using namespace std; //REMOVED FOR PRACTICE
int main()
{
	int val1{},remain{};
	std::cout << "Enter Number \n";
	std::cin >> val1;
	remain = val1 % 2;
	
	if(remain==0)
	{
		std::cout << "Number "<< val1 << " is even\n";
	}
	else
	{
		std::cout << "Number " << val1 << " is odd\n";
	}

	system("pause"); //For certain consoles that force close after runtime
	return 0;
}
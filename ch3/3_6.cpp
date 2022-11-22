//#include <stdio.h> //Unused
#include <iostream>
//using namespace std; //REMOVED FOR PRACTICE
int main()
{
	

	//IO Section

	bool loop = true; //not needed just for me
	char answer = 'n';//REMOVE IF NOT NEEDED


	while (loop == true)//REMOVE IF NOT NEEDED
	{//REMOVE IF NOT NEEDED
		//Variable Section
		double val1{}, val2{}, val3{}, max{}, mid{}, min{};
		std::cout << "Enter 3 Integers \n";
		std::cout << "Int 1:";
		std::cin >> val1;
		std::cout << "Int 2:";
		std::cin >> val2;
		std::cout << "Int 3:";
		std::cin >> val3;

		if (val1 >= val2 && val1 >= val3)
		{
			max = val1;
			if (val2 >= val3)
			{
				mid = val2;
				min = val3;
			}
			else
			{
				min = val2;
				mid = val3;
			}
		}

		if (val2 >= val1 && val2 >= val3)
		{
			max = val2;
			if (val1 >= val3)
			{
				mid = val1;
				min = val3;
			}
			else
			{
				min = val1;
				mid = val3;
			}
		}

		if (val3 >= val1 && val3 >= val2)
		{
			max = val3;
			if (val1 >= val2)
			{
				mid = val1;
				min = val2;
			}
			else
			{
				min = val1;
				mid = val2;
			}
		}

		std::cout << "Order of integers from largest to smallest " << max << ' ' << mid << ' ' << min << '\n';

		std::cout << "Try again? Press n/N for exit or enter any character to continue";//REMOVE IF NOT NEEDED
		std::cin >> answer;//REMOVE IF NOT NEEDED
		if(answer=='n' || answer == 'N')
		{
			loop = false;
		}
	}
	system("pause"); //For certain consoles that force close after runtime
	return 0;
}
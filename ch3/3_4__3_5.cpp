//#include <stdio.h> //Unused
#include <iostream>
//using namespace std; //REMOVED FOR PRACTICE
int main()
{
	//Variable Section
	int val1{}, val2{};\

	/*For exercise 3.5
	double val1{}, val2{};
	*/
	
	//IO Section
	std::cout << "Enter 2 Integers \n";
	std::cout << "Int 1:";
	std::cin >> val1;
	std::cout << "Int 2:";
	std::cin >> val2;

	//Log Input
	std::cout << "Integer 1=" << val1 << ", Integer 2=" << val2 << '\n';

	//Arithmetic
	if (val1 > val2) std::cout << "Integer 1 is larger than Integer 2\n";
	if (val1 < val2) std::cout << "Integer 2 is larger than Integer 1\n";
	if (val1 == val2) std::cout << "Integer 1 is equal to Integer 2\n";

	int ans = val1 + val2;

	/*For exercise 3.5
	double ans = val1 + val2;
	*/

	std::cout << "Sum Int 1 + 2=" << ans << '\n';

	ans = val1 - val2;
	std::cout << "Difference Int 1 - 2 =" << ans << '\n';
	ans = val2 - val1;
	std::cout << "Difference Int 2 - 1 =" << ans << '\n';

	ans = val1 * val2;
	std::cout << "Multiply Int 1 by 2 =" << ans << '\n';

	ans = val1 / val2;
	std::cout << "Divide Int 1 by 2 =" << ans << '\n'; //Note that since its a int the division will lose data
	ans = val2 / val1;
	std::cout << "Divide Int 2 by 1 =" << ans << '\n'; //Note that since its a int the division will lose data


	system("pause"); //For certain consoles that force close after runtime
	return 0;
}
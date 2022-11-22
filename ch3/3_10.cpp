//#include <stdio.h> //Unused
#include <iostream>
//using namespace std; //REMOVED FOR PRACTICE
int main()
{
    std::cout << "Provide an operation and two values you'd like operated on:\n";
    std::string operation;
    double val1{},val2{}, result{};
    std::cin >> operation >> val1 >> val2;

    if (operation == "+" || operation == "plus")
        result = val1 + val2;
    else if (operation == "-" || operation == "minus")
        result = val1 - val2;
    else if (operation == "*" || operation == "mul")
        result = val1 * val2;
    else if (operation == "/" || operation == "div")
        result = val1 / val2;

    std::cout << "The result of your operation is " << result << '\n';

	system("pause"); //For certain consoles that force close after runtime
	return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter the miles:";
		float dist{},conv{};
	cin >> dist;

	conv = dist * 1.603;

	cout << "\nThe equivalent in miles = " << conv;
	system("pause");
	return 0;
}
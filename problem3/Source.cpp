#include <iostream>
using namespace std;

int solveFactorial(int num)
{
	if (num > 1)
	{
		return num * solveFactorial(num - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int factorial = 0; //user input
	int product = 0; //product of factorial

	while (factorial <= 0)
	{
		cout << "Welcome! Input an integer, and we'll tell you the value of it as a factorial!" << endl;
		cout << "Input an integer: ";
		cin >> factorial;
		cout << endl;

		if (factorial <= 0)
		{
			cout << "Error! Enter a non-zero positive integer please." << endl << endl;
		}
	}

	product = solveFactorial(factorial);

	cout << "Calculating factorial of " << factorial << "..." << endl;
	cout << "Factorial of " << factorial << ": " << product;

	return 0;
}
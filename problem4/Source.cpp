#include <iostream>

using namespace std;

int fibonacciSequence(int num)
{
	if (num > 1)
	{
		return fibonacciSequence(num - 1) + fibonacciSequence(num - 2);
	}
	else
	{
		return num;
	}
}

int main()
{
	int index = 0; //number of fibonacci numbers inputted by user
	int final = 0; //sum of fibonacci numbers

	while (index <= 0)
	{
		cout << "Fibonacci sequence generator!" << endl;
		cout << "Enter how many numbers of fibonacci you want: ";
		cin >> index;
		cout << endl;

		if (index <= 0)
		{
			cout << "Error! Please enter a non-zero positive number." << endl << endl;
		}
	}

	cout << "Calculating final fibonacci number..." << endl;

	final = fibonacciSequence(index);

	cout << "Final fibonacci number: " << final;

	return 0;
}
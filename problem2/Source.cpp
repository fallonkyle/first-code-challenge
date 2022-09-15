#include <iostream>

using namespace std;

void whichIsGreater(int num1, int num2, int num3)
{
	int greatestValue = num1;  //this is just to give greatestValue a default value

	if (num2 > num1)
	{
		greatestValue = num2;

		if (num3 > num2)
		{
			greatestValue = num3;
		}
	}
	else if (num3 > num1)
	{
		greatestValue = num3;
	}

	cout << "The greatest int you entered: " << greatestValue;
}

int main()
{
	int int1, int2, int3;

	cout << "Which is greater?" << endl;
	cout << "This machine will calculate which of the three integers is greater! Try it out!" << endl << endl;
	
	//Giving int1, int2, and int3 a value based on user input
	cout << "Enter an int: ";
	cin >> int1;
	cout << endl;

	cout << "Enter an int: ";
	cin >> int2;
	cout << endl;

	cout << "Enter an int: ";
	cin >> int3;
	cout << endl;

	cout << "You entered: " << int1 << " " << int2 << " " << int3 << endl;

	cout << "Calculating which is greater..." << endl << endl;

	whichIsGreater(int1, int2, int3);

	return 0;
}
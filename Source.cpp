#include <iostream>

using namespace std;

void reverseString(string s)
{
	string newString;

	for (int i = s.length() - 1; i > -1; i--)
	{
		newString += s.at(i);
	}

	cout << "Your new & reversed string: " << newString << endl << endl;
	cout << "Thank you for using the String-reverser! Goodbye!";
}

int main()
{
	string userString;

	cout << "Welcome to the String-reverser!" << endl;
	cout << "Enter a string: ";
	cin >> userString;

	cout << endl;

	cout << "You inputted: " << userString << endl;
	
	reverseString(userString);

	return 0;
}
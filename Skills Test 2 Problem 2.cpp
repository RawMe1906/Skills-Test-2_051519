#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y;

	cout << "Input a positive integer number: ";
		cin >> x;
	cout << "\n";
	cout << "\n";
	
	if (x > 0 || x < 0)
		{
			cout << "Multiplication Table of " << x << ":" << endl;
			cout << "\n";
		for (y=1; y<=10; y++)
	{
	cout << y << " * " << x << " = " << y * x << endl;
	}
	}
	else
		cout << "Invalid number!";

	_getch();
	return 0;
}
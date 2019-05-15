#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double a, b, c;

	cout << "Enter first number: ";
		cin >> a;
	cout << "Enter second number: ";
		cin >> b;
	cout << "Enter third number: ";
		cin >> c;

	if (a > b && a > c)
		cout << "The first number (" << a << ") is the largest among the three.";
	else if ( b > a && b > c)
		cout << "The second number (" << b << ") is the largest among the three.";
	else if (c > a && c > b)
		cout << "The third number (" << c << ") is the largest among the three.";
	else if (a == b && a == c)
		cout << "All numbers are of equal value.";
	else if (b == a && b > c)
		cout << "The largest number is " << b ;
	else if (a == c && a > b)
		cout << "The largest number is " << a ;
	else if (b == c && b > a)
		cout << "The largest number is " << b ;
	else 
		cout << "Try again!";
	
	

	_getch();
	return 0;
}
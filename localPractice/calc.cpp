#include <iostream>
using namespace std;

int main()
{
	int a,b;
	char c;
	cout << "Enter the two values. \n";
	cin >> a;
	cin >> b;
	cout << "Enter the operation. \n";
	cin >> c;
	if (c == '+')
		cout << "The Addition of " << a << " and " << b << " is " << a+b;
	else if ( c == '-')
		if (a > b)
			cout << "The Subtraction of " << b << " from " << a << " is " << a - b;
		else 
			cout << "The Subtraction of " << a << " from " << b << " is " << b - a;
	else if (c == '*')
		cout << "The Multiplication of " << a << " and " << b << " is " << a*b;
	else if (c == '/')
		if (a > b)
			cout << "The Division of " << a << " by " << b << " is " << a / b;
		else 
			cout << "The Division of " << b << " by " << a << " is " << b / a;
	else if (c == '%')
		if (a>b)
			cout << "The Answer is " << a % b;
		else
			cout << "The Answer is " << b % a;
	else
		cout << "Error! Wrong Operation selected.";
	return 0;
}
	
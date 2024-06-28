#include <iostream>
using namespace std;

int main()
{
	int a , b;
	cout << "Enter the first value \n";
	cin >> a;
	cout << "Enter the second value \n";
	cin >> b;
	if (a>b)
		cout << "The greater value is " << a;
	else if (b>a)
		cout << "The greater value is " << b;
	else if (b==a)
		cout << "Entered both values are same, be mature and use the code as intended";
	else 
		cout << "Error 404, how did you even get here";
	return 0;
}
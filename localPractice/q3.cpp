#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter the Quantity. \n";
	cin >> a;
	b=a*100;
	if (b<1000)
		cout << "Your total amount is " << b;
	else 
		cout << "Your total amount is " << b*0.9;
	return 0;
}
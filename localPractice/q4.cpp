#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	float c;
	c=1.05;
	cout << "Please enter your salary. \n";
	cin >> a;
	cout << "Please enter your years of service. \n";
	cin >> b;
	if (b>5)
		cout << "Your total salary is " << a*c;
	else 
		cout << "Your total salary is " << a;
	return 0;
}
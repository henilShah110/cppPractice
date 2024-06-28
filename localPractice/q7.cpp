#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout << "Enter the value. \n";
	cin >> a;
	if (a<0)
		cout << 0-a;
	else 
		cout << a;
	return 0;
}
#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout << "Enter your marks. \n";
	cin >> a;
	if (a>100)
		cout << "Error";
	else if (a>80)
		cout << "A";
	else if (a>60)
		cout << "B";
	else if (a>50)
		cout << "C";
	else if (a>45)
		cout << "D";
	else if (a>25)
		cout << "E";
	else if (a>0)
		cout << "F";
	else 
		cout << "Error";
	return 0;
}
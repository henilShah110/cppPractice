#include <iostream>
using namespace std;

int main()
{
	float l,b;
	cout << "Enter the Length of the rectangle \n";
	cin >> l;
	cout << "Enter the Breadth of the rectangle \n";
	cin >> b;
	if (l==b)
		cout << "The given information suggests, the rectangle is also a square.";
	else 
		cout << "The given information suggests, the rectangle is not a square.";
	return 0;
}
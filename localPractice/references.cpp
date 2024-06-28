#include <iostream>
using namespace std ;

int main ()
{
	int a = 5;
	int& ref = a;
	cout << ref << endl;
	
	ref = 2;
	cout << ref << " " << a;
	return 0;
}
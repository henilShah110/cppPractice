#include <iostream>
using namespace std ;

int main ()
{
	int var = 8;
	int* ptr = &var;
	cout << ptr << endl;
	
	int** ptr1 = &ptr;
	cout << ptr1 << endl;
	
	*ptr = 10;
	cout << var << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int a , b;
	a = 97765 ;
	b = 0;
	while ( a > 0)
	{
		
		cout << "Enter a number. \n";
		cin >> a ;
		b += a ;
		
	}
	
	cout << b - a ;
	
	return 0;
}
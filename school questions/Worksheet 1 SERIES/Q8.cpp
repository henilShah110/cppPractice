#include <iostream>
using namespace std ;

int main ()
{
	int n;
	n = 4;
	for ( int i = n ; i >= 0 ; i--)
	{
		cout << "1";
		for ( int o = 0 ; o < i ; o++)
			cout << "0";
		cout << " ";
	}
	return 0;
}
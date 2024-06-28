#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	int n , x;
	string op ;
	x = 0;
	cin >> n;
	for ( int a=0 ; a < n ; a++ )
	{
		cin >> op;
		if ( op[1] == '+')
			x++;
		else
			x--;
	}
	cout << x;
	return 0;
}
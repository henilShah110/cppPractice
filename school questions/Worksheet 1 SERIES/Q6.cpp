#include <iostream>
using namespace std ;

int main ()
{
	int n , o;
	o = 0;
	cin >> n;
	for ( int i = 1 ; i <= n ; i++)
	{
		o = o + (i*i);
	}
	cout << o ;
	
	return 0;
}
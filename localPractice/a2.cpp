#include <iostream>
using namespace std ;

int main ()
{
	int n , h ;
	h = -1e9  ; 
	cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
		if ( a[i] > h )
			h = a[i];
		else if ( 
	}
	cout << h;
	return 0;
}
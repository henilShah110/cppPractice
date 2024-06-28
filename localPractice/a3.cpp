#include <iostream>
using namespace std ;

int main ()
{
	int n  ;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
		if  (i >= 2)
		{	if ( (a[i-1]) > a[i] && (a[i-1]) > (a[i-2]) 	
				cout << i-1 << ":" << a[i-1] ;
		}
	}
	
	return 0;
}
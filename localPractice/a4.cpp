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
		if (( a[i] % 2 ) == ( i % 2))
			cout << a[i] << ":" << i ;
	}
	return 0;
}
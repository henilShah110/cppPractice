#include <iostream>
using namespace std ;

int main ()
{
	int n;
	int sample = 1;
	cin >> n;
	int a[n];
	for ( int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		if ( i >= 1 )
		{
			if ( a[i] != a[i-1])
				sample++;
		}
	}
	cout << sample;
	return 0;
}
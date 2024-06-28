#include <iostream>
using namespace std ;

int main ()
{
	int n  ;
	cin >> n;
	int smEle = 1e9;
	int secSmEle = 1e9;
	int smEleI = 0;
	int a[n];
	for (int i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
		if ( a[i] < smEle)
		{
			smEle = a[i];
			smEleI = i;
		}
	}
	for ( int i = 0 ; i < (n) ; i ++ )
	{
		if ( i == smEleI)
			;
		else if ( a[i] < secSmEle)
			secSmEle = a[i];
	}
	cout << secSmEle;
	return 0;
}
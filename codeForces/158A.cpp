#include <iostream>
using namespace std ;

int main ()
{
	int n , k ;
	cin >> n >> k ;
	int a[n];
	/*int j = n;
	for ( int i = 0; i < n ; i++ )
	{
		cin >> a[i];
		if ( i >= (n-k) )
		{
			if ( a[i] < a[n-k] )
				j-- ; 
		}
		if ( a[i] <= 0)
		{
				j = (i);
				break;
		}
			
	}*/	
	for(int i=0; i<n; i++)
		cin>>a[i];
	int ans = 0;
	for(int i=0; i<n; i++)
		if(a[i] >= a[k-1] && a[i] > 0)
			ans++;
	cout << ans;
	return 0;
}
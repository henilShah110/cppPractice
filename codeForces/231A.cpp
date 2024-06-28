#include <iostream>
using namespace std ;

int main ()
{
	int n , a , ans , n1 , n2 , n3 ;
	ans = 0;
	cin >> n;
	
	for ( a = 0 ; a < n ; a++ )
	{
		cin >> n1 >> n2 >> n3 ;
		if ( (n1 + n2 + n3)>= 2 )
			ans++;
	}
	cout << ans;
	return 0;
}
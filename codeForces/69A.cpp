#include <iostream>
using namespace std ;

int main ()
{
	int n , x1 , y1 , z1 , xsum , ysum , zsum , sum ;
	xsum = 0;
	ysum = 0;
	zsum = 0;
	cin >> n;
	for ( int i = 0 ; i < n ; i++)
	{
		cin >> x1 >> y1 >> z1;
		xsum = xsum + x1 ;
		ysum = ysum + y1 ;
		zsum = zsum + z1 ;
	}
	if ( xsum == 0 && ysum==0 && zsum == 0)
		cout << "YES" ;
	else 
		cout << "NO" ;
	return 0;
}
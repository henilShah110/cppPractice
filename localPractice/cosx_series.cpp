#include <iostream>
using namespace std ;

int main ()
{
	int n , f ;
	float t;
	float sum , x;
	cin >> x;
	n=10;
	float j = 1;
	sum = 0;
	t =x;
	x *= x;
	f = 1;
	for ( int i = 2 ; i <= n ; i++ )
	{
		j = j*i;
		if ( i % 2 == 0 )
		{
			f++;
			if ( f % 2  != 0)
				sum -= x/j;
				
			else
				sum += x/j;
		}
		x *= t;
	}
	cout <<fixed<< 1-sum;
	return 0;
}
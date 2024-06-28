#include <iostream>
using namespace std ;

int main ()
{
	int n ;
	float t;
	float sum , x;
	cin >> x;
	cin >> n;
	float j = 1;
	sum = 0;
	t =x;
	for ( int i = 1 ; i <= n ; i++)
	{
		
		j = j*i;
		sum += x/j;
		x *= t;
	}
	cout << sum;
	return 0;
}
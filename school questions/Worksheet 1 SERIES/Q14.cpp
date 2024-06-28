#include <iostream>
using namespace std ;

int main ()
{
	int n ;
	float sum , x;
	cin >> x;
	cin >> n;
	float j = 1;
	sum = 0;
	for ( int i = 1 ; i <= n ; i++)
	{
		
		j = j*i;
		sum += x/j;
	}
	cout << sum;
	return 0;
}
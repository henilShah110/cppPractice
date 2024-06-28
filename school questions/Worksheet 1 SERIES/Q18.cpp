#include <iostream>
using namespace std ;

int main ()
{
	int n , sum , j;
	cin >> n;
	j = 1;
	sum = 0;
	
	for ( int i = 0 ; i <= n ; i++)
	{
		j += i;
		sum += j;
	}
	cout << sum;
	return 0;
}
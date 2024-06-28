#include <iostream>
using namespace std ;

int main ()
{
	int n ,sum;
	cin >> n;
	int j = 1;
	sum = 0;
	for ( int i = 1 ; i <= n ; i++)
	{
		
		j = j*i;
		sum += j;
	}
	cout << sum;
	return 0;
}
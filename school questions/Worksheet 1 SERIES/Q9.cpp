#include <iostream>
using namespace std ;

int main ()
{
	int n ,sum;
	cin >> n;
	int j = 0;
	sum = 0;
	for ( int i = 0 ; i < n ; i++)
	{
		j = (j*10) + 2;
		sum += j;
	}
	cout << sum;
	
	return 0;
}
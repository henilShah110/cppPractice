#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int no = n;
	int j=0;
	while ( n != 0 )
	{
		n /= 10;
		j++;
	}
	// j is the no. of digits
	int sum =0;
	int o = 10;
	int digit;
	int max = 0;
	for ( int i = 0 ; i < j ; i++)
	{
		digit = no % o;
		if ( digit > max)
			max = digit;
		int tbs = no % o;
		// tbs means to be subtracted
		no -= tbs;
		no /= 10;
		
	}
	cout << max;
	return 0;
}
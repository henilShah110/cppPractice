#include <iostream>
using namespace std ;

int main ()
{
	int n;
	int digit;
	cin >> n; 
	int no = n;
	int j=0;
	while ( n != 0 )
	{
		n /= 10;
		j++;
	}
	// j is the no. of digits
	int digits = j;
	int o = 10;
	int zeroes =1 ;
	for ( int p = 1 ; p < digits ; p++)
	{
		zeroes *= 10;
	}
	// zeroes is no. of digits zeroes eg 3456 == 1000
	int sum = 0;
	for ( int i = 0 ; i < j ; i++)
	{
		digit = no % o;
		sum += digit*zeroes;
		int tbs = no % o;
		// tbs means to be subtracted
		no -= tbs;
		no /= 10;
		zeroes /= 10;
	}
	cout << sum;
			
	return 0;
}
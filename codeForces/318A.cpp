#include <iostream>
using namespace std ;

int main ()
{
	long long n , k;
	cin >> n >> k;
	long long q = n%2;
	
	//cout << q << endl ;
	if(q == 0) 
	{
		//if n even 
		n/=2;
		
	}
	else
	{
		//if n is odd
		n++;
		n/=2;
	}
	
	if( n >= k)
	{
		long long add1 = 2*(k-1);
		cout << 1 + add1;
	}
	else
	{
		//cout << k << endl << n << endl;
		long long add2 = 2 * (k - n - 1);
		cout << 2 + add2;
	}
	return 0;
}
#include <iostream>
using namespace std ;

int main ()

{
	int i , f , n ;
	float h , c;
	
	cout << "Enter your number. \n";
	cin >> n ;
	
	h = n * ( n + 1 ) * ((2 * n) + 1) ;
	c = h / 6 ;
	
	i = 1 ;
	f = 1 ;
	 
	while ( i <= n )
	{
		f += (i*i);
		i++ ;
	}
	cout << "Through the Loop = " << (f - 1) << " \n" ;
	cout << "Through the Formula = " << c << " \n " ;
	
	if ( ( f - 1 ) == c )
		cout << "Verified Correctly" ;
	else
		cout << " NOOOOOOOOO...";
	
	return 0;
}
	 
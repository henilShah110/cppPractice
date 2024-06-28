#include <iostream>
using namespace std ;

int main ()

{
	int sum , i , n , a ;
	cout << "Enter Your Number. \n " ;
	cin >> n ;
	sum = 0;
	i = 1 ;
	a = 1 ;
	
	 while ( i <= n )
	 {
		 sum += i ;
		 i++ ;
		if ( a <= 1 )
			cout <<  a  ;
		else 
			cout << " + " << a ;
		 
		 
		 
		 a++ ;
	 }
	 
	 cout << " = " << sum ;
	
	return 0 ;
}
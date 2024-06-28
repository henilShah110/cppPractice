#include <iostream>
using namespace std;

int main ()

{
	int f , i , n ,a ;
	f = 1 ;
	i = 1 ;
	a = 1 ;
	cout << "Enter your number. \t" ;
	cin >> n ;
	
	while ( i <= n )
	{
		f *= i ;
		i ++ ;
		cout << a << "! = " << f << " \n " ;
		a++;
	
	}
	
	
	return 0 ;
}
	
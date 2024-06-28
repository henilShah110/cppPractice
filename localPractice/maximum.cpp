#include <iostream>
using namespace std;

int main()
{
	int n , a ;
	n = 0 ;
	a = 0 ;
	while ( n != -1 )
	{
		cout << "input \n";
		cin >> n ;
		if ( n > a )
			a = n ; 
	}
	cout << "looks like you have stopped \n" ;
	cout << "the maximum numbers is " << a ;
	
	return 0;
}
		
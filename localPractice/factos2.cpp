#include <iostream>
using namespace std;

int main()
{
	int a , n ;
	cout << "Enter your number \n";
	cin >> n;
	for ( a=1 ; a <= n ; a++ )
		if ( n % a == 0 )
			cout << a << "\n";
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int a , n , m , x;
	cout << "Enter your first number \n";
	cin >> n;
	cout << "Enter your second number \n";
	cin >> m ;
	if ( m > n)
		x = n;
	else 
		x = m
	for ( a=1 ; a <= x ; a++ )
		if ( n % a == 0 )
			cout << a << "\n ";
	return 0;
}
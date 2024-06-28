#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cout << "Enter the age of person 1. \n";
	cin >> a;
	cout << "Enter the age of person 2. \n";
	cin >> b;
	cout << "Enter the age of person 3. \n";
	cin >> c;
	
	if( a > b && b > c )
		cout << a << " is largest and " << c << " is smallest";
	
	else if ( a > c && c > b )
		cout << a << " is largest and " << b << " is smallest";
	
	else if ( b > c && c > a )
		cout << b << " is largest and " << a << " is smallest";
	
	else if ( b > a && a > c )
		cout << b << " is largest and " << c << " is smallest";
	
	else if ( c > a && a > b )
		cout << c << " is largest and " << b << " is smallest";
	
	else if ( c > b && a < b )
		cout << c << " is largest and " << a << " is smallest";

	return 0;
}
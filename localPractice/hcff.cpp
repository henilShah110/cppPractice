#include <iostream>
using namespace std;

int main()
{
	int a , n , m ;
	
	cout << "Enter your first number \n";
	cin >> n;
	cout << "Enter your second number \n";
	cin >> m ;
	if (m < n)
		a = m;
	else
		a = n;
	
	while ( a > 0 )
	{
		if ( m % a == 0 && n % a == 0)
		{
			cout << a ;
			a = -1 ;
		}
		else 
			a-- ;
		
	if ( m == 0 )
		cout << n ;
	else if ( n == 0)
		cout << m ;
			
	
			
	}
	
	return 0;
}
	
	
		
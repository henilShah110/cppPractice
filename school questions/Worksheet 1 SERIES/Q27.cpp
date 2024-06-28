 #include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	if ( n == 1 ) cout << "NO";
	if ( n == 2 ) cout << "YES";
	for ( int i = 2; ; i++)
	{
		if ( i == n ) 
		{
			cout << "YES";
			break;
		}
		if ( n % i == 0) 
		{
			cout << "NO";
			break;
		}
	}
	
	return 0;
}
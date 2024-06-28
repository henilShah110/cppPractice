#include <iostream>
#include <string>
using namespace std ;

int main ()
{ 
	int n , i ;
	cin >> n;
	string a;
	cin >> a;
	int j = 0;
	for( int i = 1 ; i < n ; i++)
	{
		if ( a[i] == a[i-1])
			j++;
	}
	cout << j;
	return 0;
}
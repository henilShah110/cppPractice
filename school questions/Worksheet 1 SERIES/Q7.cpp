#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	for ( int i = 1 ; i <= n ; i++)
	{
		for ( int o = 0 ; o < i ; o++)
			cout << "9";
		cout << " ";
	}
	return 0;
}
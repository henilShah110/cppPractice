#include <iostream>
using namespace std ;

int main ()
{
	int n , o;
	o = 0;
	cin >> n;
	for (int i = 0 ; i <= n ; i++)
	{
		o = i + o;
	}
	cout << o;
	return 0;
}
#include <iostream>
using namespace std ;

int main ()
{
	int n ,o , num;
	num = 0;
	o = 0;
	cin >> n;
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> num;
		o = o + num;
	}
	cout << o;
	
	return 0;
}
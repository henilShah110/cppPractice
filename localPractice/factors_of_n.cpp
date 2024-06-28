#include <iostream>
using namespace std;

int main()
{
	int n , a;
	a = 2;
	cout << "Enter your number \n";
	cin >> n;
	while ( a < n)
	{
		if ( n % a == 0)
			cout << a << "\n";
		a++;
	}
	return 0;
}
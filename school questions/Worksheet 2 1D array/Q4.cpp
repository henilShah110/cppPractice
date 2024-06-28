#include <iostream>
using namespace std ;

int main ()
{
	int a[] = { 20,12,15,60,32};
	for ( int i = 0; i < 5 ; i++)
	{
		if ( a[i] % 5 == 0)
			cout << a[i]/ 5 << " ";
		else cout << a[i] * 2 << " ";
	}
	return 0;
}
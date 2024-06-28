#include <iostream>
using namespace std ;

int main ()
{
	int a[] = { 10,55,26,19,23,40};
	for ( int i = 0 ; i < 6 ; i++)
	{
		if ( a[i] % 2 == 0)
			cout << 0 << " ";
		else cout << a[i] << " ";
	}
	return 0;
}
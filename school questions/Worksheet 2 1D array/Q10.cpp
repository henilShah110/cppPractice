#include <iostream>
using namespace std ;

int main ()
{
	int a[] = {15,0,7,0,13};
	for ( int i = 0 ; i < 5 ; i++)
	{
		if ( a[i] == 0)
		{
			a[i] = a[i+1];
			a[i+1] = 0;
			i--;
		}
	}
	for ( int j = 0 ; j < 6 ; j++)
		cout << a[j] << " ";
	return 0;
}
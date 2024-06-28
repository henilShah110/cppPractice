#include <iostream>
using namespace std ;

int main ()
{
	int a[]= {15,55,67,19,23,45};
	int max = 0;
	for (int i = 0; i < 6 ; i++ )
	{
		if ( a[i] > max)
			max = a[i];
	}
	cout << max;
	return 0;
}
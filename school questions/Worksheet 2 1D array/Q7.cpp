#include <iostream>
using namespace std ;

int main ()
{
	int a[] ={1,2,3,4,5,6};
	int x;
	for ( int i = 0 ; i < 6 ; i+=2)
	{
		x = a[i];
		a[i] = a[i+1];
		a[i+1] = x;
	}
	for ( int j = 0 ; j < 6 ; j++)
		cout << a[j] << " ";
	return 0;
}
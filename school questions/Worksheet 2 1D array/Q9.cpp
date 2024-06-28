#include <iostream>
using namespace std ;

int main ()
{
	int a[] ={15,55,67,19,13,5};
	int x;
	int rep = 5;
	for ( int i = 0 ; i < 3 ; i++)
	{
		x = a[i];
		a[i] = a[rep];
		a[rep] = x;
		rep --;
	}
	for ( int j = 0 ; j < 6 ; j++)
		cout << a[j] << " ";
	return 0;
}
#include <iostream>
using namespace std ;

int main ()
{
	int a[] = {15,-19,7,-2,13};
	int nc = 0;
	int in;
	for ( int j = 0 ; j < 5 ; j++)
	{
		if ( a[j] < 0 )
			nc++;
	}
	in = 5 - nc;
	int i, index = 0;
	for(i=0; i<5; i++)
	{
		if(a[i] > 0)
		{
			a[index] = a[i];
			index++;
		}
		else 
		{
			
	}
	
	for ( int j = 0 ; j < 5 ; j++)
		cout << a[j] << " ";
	return 0;
}
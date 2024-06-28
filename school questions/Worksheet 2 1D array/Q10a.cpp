#include <iostream>
using namespace std ;

int main ()
{
	int a[] = {0,0,0,0,13};
	int i, index = 0;
	for(i=0; i<5; i++)
	{
		if(a[i] != 0)
		{
			a[index] = a[i];
			index++;
		}
	}
	for(; index<5; index++)
		a[index] = 0;
	for ( int j = 0 ; j < 5 ; j++)
		cout << a[j] << " ";
	return 0;
}
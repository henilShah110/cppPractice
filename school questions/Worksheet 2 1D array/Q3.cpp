#include <iostream>
using namespace std ;

int main ()
{
	int a[] = {75,55,67,29,33,66};
	int even = 0;
	int odd = 0;
	for ( int i = 0; i < 6 ; i++)
	{
		if ( a[i] % 2 == 0 )
			even++;
		else odd++;
	}
	cout << "even is " << even << "\n";
	cout << "odd is " << odd;
	return 0;
}
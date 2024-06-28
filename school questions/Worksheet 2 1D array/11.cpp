#include <iostream>
using namespace std ;

int main ()
{
	int a[10] = {10,12,14,16,19,21};
	int index , value ;
	cout << "value \n";
	cin >> value;
	cout << "index \n";
	cin >> index;
	for ( int i = 7; i >= 0 ; i--)
	{
		if ( i == index )
		{
			a[i] = value;
			break;
		}
		else
			a[i] = a[i-1];
	}
	for ( int j = 0 ; j < 7 ; j++)
		cout << a[j] << " ";
	
	return 0;
}
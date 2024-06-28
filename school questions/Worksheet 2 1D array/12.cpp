#include <iostream>
using namespace std ;

int main ()
{
	int a[10] = {10,12,14,16,19,21};
	int index ;
	cout << "index \n";
	cin >> index;
	
	for ( int i = index ; i < 5 ; i++)
		a[i] = a[i+1];
	
	for ( int j = 0 ; j < 5 ; j++)
		cout << a[j] << " ";
	return 0;
}
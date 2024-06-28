#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int k = 0;
	
	for(int i = 0 ; i < n ; i*=2)
		k++;
	
	cout << k;
	return 0;
}
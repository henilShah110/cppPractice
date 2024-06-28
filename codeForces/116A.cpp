#include <iostream>
using namespace std ;

int main ()
{	
	int n ,number,peak;
	cin >> n;
	int a[n],b[n];
	number = 0;
	peak = 0;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
		cin >> b[i];
	}
	for (int i=0;i<n;i++)
	{
		number -= a[i]; 
		number += b[i];
		if ( number>peak)
			peak=number;
	}
	cout << peak;
	return 0;
}
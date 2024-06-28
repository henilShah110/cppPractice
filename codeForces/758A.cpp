#include <iostream>
using namespace std ;

int main ()
{
	int n , max = 0;
	cin >> n;
	int a[n];
	
	for (int i=0; i < n ; i++)
	{
		cin >> a[i];
		if (a[i] > max)
			max = a[i];
	}
	
	//cout << max << endl;
	
	int sum=0;
	for (int j=0; j < n ; j++)
		sum += (max - a[j]);
	
	cout << sum; 
	return 0;
}
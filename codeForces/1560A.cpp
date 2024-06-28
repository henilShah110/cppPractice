#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	//cout << endl;
	int ans;
	for(int j = 0 ; j < n ; j++)
	{
		for(int k = 3 ; k <= a[j] ; k++ )
		{
			if(k % 3 == 0)
				a[j]++;
			else if(k % 10 == 3)
				a[j]++;
		}
		cout <<   a[j] << endl;
	}
			
				
		
	return 0;
}
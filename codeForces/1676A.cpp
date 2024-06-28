#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int a[n];
	int sum1 , sum2 ;
	for ( int i = 0 ; i < n ; i++)
	{
		sum1 = 0;
		sum2 = 0;
		cin >> a[i];
		for(int j = 0; j < 6 ; j++)
		{
			if(j < 3) sum1 += a[i]%10;
			else sum2 += a[i]%10;
			a[i]-=a[i]%10;
			a[i]/=10;
		}
		//cout << sum1 << " " << sum2 << " ";
		if(sum1 == sum2)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
	}
		
	
			
	return 0;
}
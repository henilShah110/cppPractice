#include <iostream>
using namespace std ;

int main ()
{
	int n;
	long long d=1000000000000;
	cin >> n;
	long long a[n];
	for (int i=0; i<n ; i++)
		cin>>a[i];
	for (int j=0; j<n ; j++)
	{
		if(a[j] == 1)
			cout<<"NO\n";
		else
		{	
			for(int k=0; k<=a[j] && k<=d; k++)
			{
				int z = k*k;
				if(a[j] == z)
				{
					cout<<"YES\n";
					break;
				}
				else if(k == a[j] || k == d)
				{
					cout<<"NO\n";
					break;
				}
			}
		}
	}
	return 0;
}
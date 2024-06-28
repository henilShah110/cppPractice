#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=1;j<=n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(a[k]==j)
			{
				cout<<k+1<<" ";
				break;
			}
		}
	}
	return 0;
}
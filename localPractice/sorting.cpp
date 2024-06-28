#include <iostream>
using namespace std ;

int main ()
{
	int n,x,y,cons;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		x=1e6;
		for(int j=i;j<n-1;j++)
		{
			if(a[j] < x)
			{
				x=a[j];
				y=j;
			}
		}
		cons=a[i];
		a[i]=a[y];
		a[y]=cons;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
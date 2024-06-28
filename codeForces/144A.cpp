#include <iostream>
using namespace std ;

int main ()
{
	int n,max,min,n1=0,n2;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
			n2=a[i];
		if(a[i]>n1)
		{
			n1=a[i];
			max=i;
		}
		if(a[i]<=n2)
		{
			n2=a[i];
			min=i;
		}
	}
	if(max>=min)
		min+=1;
	min=(n-min)-1;
	//cout<<max<<endl<<min<<endl;
	cout<<max+min;
		
	return 0;
}
#include <iostream>
using namespace std ;

int main ()
{
	int n,a[3],lowest=4001,n1,count=0,x,y,z;
	cin>>n;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
		if(a[i]<lowest)
		{
			lowest=a[i];
			x=i;
		}
	}
	
		n1=n-(n%lowest);
		if(x==0)
		{
			y=1;
			z=2;
		}
		else if(x==1)
		{
			y=0;
			z=2;
		}
		else
		{
			y=0;
			z=1;
		}
		
		while(n1%a[y]!=0 || n1%a[z]!=0)
			n1-=a[x];
		
		cout<<(n1/a[x]) + 2;
	
		
	return 0;
}
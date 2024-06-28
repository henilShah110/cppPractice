#include <iostream>
using namespace std ;

int main ()
{
	int a,b,c,temp,max;
	cin>>a>>b>>c;
	max=0;
	for(int i=0;i<6;i++)
	{
		if(i==0)
			temp=a+b+c;
		else if(i==1)
			temp=a*b*c;
		else if(i==2)
			temp=a+b*c;
		else if(i==3)
			temp=a*b+c;
		else if(i==4)
			temp=a*(b+c);
		else 
			temp=(a+b)*c;
		
		if(temp>max)
			max=temp;
	}
	cout<<max;
	return 0;
}
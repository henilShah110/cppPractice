#include <iostream>
using namespace std ;

int main ()
{
	float n,sum=0,p;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		sum+=p;
	}
	cout<<sum/n;
	return 0;
}
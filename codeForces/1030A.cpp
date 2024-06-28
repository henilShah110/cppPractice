#include <iostream>
using namespace std ;

int main ()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
		{
			cout<<"HARD";
			break;
		}
		if(i==n-1)
			cout<<"EASY";
	}
	return 0;
}
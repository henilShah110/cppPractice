#include <iostream>
using namespace std ;

int main ()
{
	int n,p,q,x=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		cin>>q;
		if(p<=(q-2))
			x++;
	}
	cout<<x;
	return 0;
}
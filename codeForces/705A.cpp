#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		if(i%2==0)
			cout<<"I hate that ";
		if(i%2!=0)
			cout<<"I love that ";
	}
	if(n%2!=0)
		cout<<"I hate it";
	if(n%2==0)
		cout<<"I love it";
	return 0;
}
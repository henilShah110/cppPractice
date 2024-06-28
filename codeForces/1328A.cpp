#include <iostream>
using namespace std ;

int main ()
{
	long long n,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a%b==0)
			cout<<"0\n";
		else
			cout<<b-(a%b)<<endl;
		
	}			
	return 0;
}
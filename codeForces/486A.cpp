#include <iostream>
using namespace std ;

int main ()
{
	long long n,sum=0;
	cin>>n;
	if(n%2!=0)
		cout<<(n/2)-n;
	else
		cout<<n/2;
	return 0;
}
#include <iostream>
using namespace std ;

int main ()
{
	int n,m,count=0;
	cin>>n>>m;
	
	while(true)
	{
		if(n==0 || m==0)
			break;
		n--;
		m--;
		count++;
	}
	if(count%2==0)
		cout<<"Malvika";
	else
		cout<<"Akshat";
	return 0;
}
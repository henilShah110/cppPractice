#include <iostream>
using namespace std ;

int main ()
{
	int ans=0;
	int num=0;
	int n;
	
	cin>>n;
	int a[n];
	for(int j=0; j<n ; j++)
		cin>>a[j];
	for(int i=0; i<n; i++)
	{
		
		if(a[i]==-1 && num==0)
			ans++;
		else if(a[i]!= -1)
			num=num+a[i];
		else if(a[i] == -1 && num!=0)
			num=num-1;
		
	}
	cout<<ans;
	return 0;
}
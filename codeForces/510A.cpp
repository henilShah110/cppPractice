#include <iostream>
using namespace std ;

int main ()
{
	int n,m,count=1;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		if(count%2!=0)
		{
			for(int j=0;j<m;j++)
				cout<<"#";
		}
		else if(count%4==0)
		{
			cout<<"#";
			for(int j=0;j<m-1;j++)
				cout<<".";
			
		}
		else if(count%2==0)
		{
			for(int j=0;j<m-1;j++)
				cout<<".";
			cout<<"#";
		}
		count++;
		cout<<endl;
	}
	return 0;
}
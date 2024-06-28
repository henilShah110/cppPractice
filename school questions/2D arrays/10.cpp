#include <iostream>
using namespace std ;

int main ()
{
	int n,m,sum=0,e=1;
	cin>>n>>m;
	int A[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>A[i][j];
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			e++;
			if(e%2==0)
				sum+=A[i][j];
		}
		
	}
	cout<<sum;	
	return 0;
}
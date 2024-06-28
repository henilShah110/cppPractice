#include <iostream>
using namespace std ;

int main ()
{
	int n=3,m=3,sum=0;
	
	int A[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
			sum+=A[i][j];
		}
	cout<<sum;
	
		
	return 0;
}
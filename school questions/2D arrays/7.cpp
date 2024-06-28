#include <iostream>
using namespace std ;

int main ()
{
	int n,sum=0;
	cin>>n;
	int A[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
	
	for(int i=0;i<n;i++)
		sum+=A[i][i];
		
	for(int i=0;i<n;i++)
	{
		if(A[i][i]!=A[i][n-i-1])
			sum+=A[i][n-i-1];
	}
	
	cout<<sum;
	
		
	return 0;
}
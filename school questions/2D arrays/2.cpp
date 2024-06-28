#include <iostream>
using namespace std ;

int main ()
{
	int n,m,sum=0;
	cout<<"enter the dimensions and then the nos.";
	cin>>n>>m;
	int A[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
			if(A[i][j]>sum) sum=A[i][j];
		}
	cout<<sum;
	
		
	return 0;
}
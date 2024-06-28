#include <iostream>
using namespace std ;

int main ()
{
	int n,m;
	cin>>n>>m;
	int A[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>A[i][j];
		
	A[0][m-2]=0;
	A[0][m-1]=0;
	A[1][m-1]=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
		
	return 0;
}
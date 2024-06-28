#include <iostream>
using namespace std ;

int main ()
{
	int n,m,x=0;
	cin>>n>>m;
	int A[n][m],ar[n*m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
			ar[x]=A[i][j];
			x++;
		}
	for(int i=0;i<n*m;i++)
		cout<<ar[i]<<" ";
		
	
		
	return 0;
}
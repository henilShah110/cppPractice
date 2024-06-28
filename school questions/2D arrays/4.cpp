 #include <iostream>
using namespace std ;

int main ()
{
	int n,m,sum;
	cin>>n>>m;
	int A[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>A[i][j];
		
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<m;j++)
			sum+=A[i][j];
		cout<<"row no."<<i<<":"<<sum<<endl;
	}
	
	for(int j=0;j<n;j++)
	{
		sum=0;
		for(int i=0;i<m;i++)
			sum+=A[i][j];
		cout<<"column no."<<j<<":"<<sum<<endl;
	}
		
	return 0;
}
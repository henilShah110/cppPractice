#include <iostream>
using namespace std ;

int main ()
{
	int n,usum=0,lsum=0;
	cin>>n;
	int A[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
		
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(i<j)
				usum+=A[i][j];
			else if(i>j)
				lsum+=A[i][j];
		}
	cout<<"a)"<<usum<<endl<<"b"<<lsum;
		
	return 0;
}
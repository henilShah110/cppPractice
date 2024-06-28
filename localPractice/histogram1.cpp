#include <iostream>
using namespace std ;

int main ()
{
	int n,maxar=0;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]>maxar)
			maxar=ar[i];
	}
	int h[maxar+1];
	for(int i=0;i<maxar+1;i++)
		h[i]=0;
	
	for(int j=0;j<n;j++)
		h[ar[j]]++;
	
	for(int i=0;i<maxar+1;i++)
		cout<<h[i]<<" ";
			
	
	return 0;
}
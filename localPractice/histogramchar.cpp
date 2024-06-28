#include <iostream>
using namespace std ;

int main ()
{
	int n,maxar=0;
	cin>>n;
	char ar[n];
	cin>>ar;
	
	int h[26];
	for(int i=0;i<26;i++)
		h[i]=0;
	
	for(int j=0;j<n;j++)
		h[(int)(ar[j]-'a')]++;
	
	for(int i=0;i<26;i++)
		cout<<h[i]<<" ";
			
	
	return 0;
}
#include <iostream>
using namespace std ;

int main ()
{
	int n,maxar=0,flag=0;
	cin>>n;
	char ar[n];
	cin>>ar;
	
	for(int i=0;i<n;i++)
		if('A'<=ar[i] && ar[i]<='Z')
			ar[i]=(int)(ar[i]+=32);
	
	int h[26];
	for(int i=0;i<26;i++)
		h[i]=0;
	
	for(int j=0;j<n;j++)
		h[(int)(ar[j]-'a')]++;
	
	for(int i=0;i<26;i++)
		if(h[i]==0)
		{
			cout<<"NO";
			flag=1;
			break;
		}
	if(flag==0)
		cout<<"YES";
			
	
	return 0;
}
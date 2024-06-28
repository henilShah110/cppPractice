#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	int n,len,x;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{	
		cin>>s;
		len=s.length();
		if(len%2!=0)
			cout<<"NO"<<endl;
		else
		{
			x=0;
			for(int j=0;j<len/2;j++)
			{
				if(s[j]!=s[(len/2)+x])
				{
					cout<<"NO"<<endl;
					break;
				}
				x++;
				if(j==(len/2)-1)
					cout<<"YES"<<endl;
			}
		}
		
	}
		
	return 0;
}
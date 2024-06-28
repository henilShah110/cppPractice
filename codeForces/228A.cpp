#include <iostream>
using namespace std ;

int main ()
{
	int s[4],l=0;
	for(int i=0;i<4;i++)
	{
		cin>>s[i];
		for(int j=i-1;j>=0;j--)
			if(s[j]==s[i])
			{
				l++;
				break;
			}
	}
	cout<<l;
	
	return 0;
}
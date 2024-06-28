#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s;
	cin>>s;
	int x=0,len=s.length();
	for(int i=1;i<len;i++)
	{
		if(s[i]==s[i-1])
			x++;
		else
			x=0;
		
		if(x==6)
		{
			cout<<"YES";
			break;
		}
		else if(i==len-1)
			cout<<"NO";
	}
	return 0;
}
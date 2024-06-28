#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s;
	cin>>s;
	int x=0,len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='h' && x==0)
			x++;
		else if(s[i]=='e' && x==1)
			x++;
		else if(s[i]=='l' && x==2)
			x++;
		else if(s[i]=='l' && x==3)
			x++;
		else if(s[i]=='o' && x==4)
		{
			cout<<"YES";
			 break;
		}
		if(i==len-1)
			cout<<"NO";
	}
	return 0;
}
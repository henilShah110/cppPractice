#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string s1,s2;
	cin>>s1>>s2;
	int len=s1.length();
	for(int i=0;i<len;i++)
	{
		if('A'<=s1[i] && s1[i]<='Z')
				s1[i]=char (s1[i]+32);
		if('A'<=s2[i] && s2[i]<='Z')
				s2[i]=char (s2[i]+32);
		
		if(s1[i]>s2[i])
		{
			cout<<1;
			break;
		}
		else if(s1[i]<s2[i])
		{
			cout<<-1;
			break;
		}
		else if(i==len-1)
			cout<<0;
	}
	
	return 0;
}
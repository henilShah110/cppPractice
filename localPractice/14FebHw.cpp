#include <iostream>
#include <string>
using namespace std ;

string shift(string s,int k)
{
	string s2;
	int len=s.length();
	int val;
	for(int i=0;i<len;i++)
	{
		if(s[i]==' ')
			s2[i]=' ';
		else if(s[i]!=' ')
		{
			if('A'<=s[i] && s[i]<='Z')
				val = s[i] - 'A';
			else
				val = s[i] - 'a';
			val = (val + k) % 26;
			if('A'<=s[i] && s[i]<='Z')
				s2[i] = 'A' + val;
			else
				s2[i] = 'a' + val;
			s2 += s2[i];
		}
	}
	return s2;
}

string decoding(string n,int k)
{
	string n2;
	int len=n.length();
	int val;
	for(int i=0;i<len;i++)
	{
		if(n[i]==' ')
			n2[i]=' ';
		else if(n[i]!=' ')
		{
			if('A'<=n[i] && n[i]<='Z')
				val = n[i] - 'A';
			else
				val = n[i] - 'a';
			val+=26;
			val = (val - k) % 26;
			if('A'<=n[i] && n[i]<='Z')
				n2[i] = 'A' + val;
			else
				n2[i] = 'a' + val;
			n2 += n2[i];
		}
	}
	return n2;
}

int main ()
{
	string s3;
	int k1;
	cout<<"Enter string and number"<<endl;
	cin>>s3>>k1;
	cout<<shift(s3,k1)<<endl;
	cout<<shift(shift("john eats burger",10),16)<<endl;
	cout<<shift(shift("john eats burger",1),0)<<endl;
	cout<<decoding("john eats burger giberish",10)<<endl;
	
	
	return 0;
}
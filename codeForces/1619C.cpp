#include <iostream>
using namespace std ;

int main ()
{
	int t;
	cin>>t;
	//t is the no. of test cases,a is n1;b is n2(to be founded);s is sum(a+b)
	for(int i=0;i<t;i++)
	{
		int a,b,s,digits,a1,thplace=1,a0,s0,count;
		cin>>a>>s;
		a1=a;
		digits=0;
		while(a1 != 0)
		{
			a1 = a1/10;
			digits++;
		}
		b=0;
		count=0;
		//digits is no. of digits of a
		//thplace will be used to form b; like ones place tenth place...
		
		//a0 and s0 unit digits of a and s
		for(int j=0;j<digits;j++)
		{
			a0=(a%10);
			s0=(s%10);
			if(a==0 || s==0)
			{
				cout<<-1<<endl;
				
				count=-1;
				break;
			}
			
			//cout<<a0<<endl<<s0<<endl;
			if(a0<s0)
			{
				b+=((s0-a0)*thplace);
				s/=10;
			}
			else if(a0>s0)
			{
				b+=(10+s0-a0)*thplace;
				s/=100;
			}
			else if(a0==s0)
				s/=10;
			a/=10;
			thplace*=10;
			
		}
		
		if(count!=-1)
		{
			cout<<b<<endl;
		}
	}
	return 0;
}
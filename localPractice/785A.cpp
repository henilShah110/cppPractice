#include <iostream>
using namespace std ;

int main ()
{
	int n,sum=0;
	string a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a=="Tetrahedron")
			sum+=4;
		else if(a=="Cube")
			sum+=6;
		else if(a=="Octahedron")
			sum+=8;
		else if(a=="Icosahedron")
			sum+=20;
		else
			sum+=12;
	}
	cout<<sum;
	return 0;
}
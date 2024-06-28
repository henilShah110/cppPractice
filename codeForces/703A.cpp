#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int m[n],c[n];
	int mi=0,ch=0;
	for (int i = 0; i < n ; i++)
	{
		cin >> m[i] >> c[i];
		if(m[i]>c[i])
			mi++;
		else if(m[i]<c[i])
			ch++;
	}
	if(mi>ch)
		cout<<"Mishka";
	else if(mi<ch)
		cout << "Chris";
	else
		cout<< "Friendship is magic!^^";
	return 0;
}
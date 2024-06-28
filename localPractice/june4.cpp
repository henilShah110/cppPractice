#include <iostream>
using namespace std;

int main()
{ 
	int a,b ;
	cin >> a;
	cin >> b;
	
	bool b1,b2,b3,b4,b5,b6;
	
	b1= (a > b); 
	cout << b1 << "\n";
	b2= (a < b); 
	cout << b2 << "\n";
	b3= (a  >= b); 
	cout << b3 << "\n";
	b4= (a <= b); 
	cout << b4 << "\n";
	b5= (a == b); 
	cout << b5 << "\n";
	b6= (a!=b);
	cout << b6 << "\n";
	return 0;
}
	
	
	
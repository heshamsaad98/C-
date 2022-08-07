#include <iostream>
using namespace std;

int main()
{
	int grate;
	cout<<"Enter your grade \n";
	cin>>grate;

	if(grate >= 90)
		cout<<"A\n";
	else if(grate >= 80)
		cout<<"B\n";
	else if(grate >= 70)
		cout<<"C\n";
	else if(grate >= 60)
		cout<<"D\n";
	else
		cout<<"F\n";
}
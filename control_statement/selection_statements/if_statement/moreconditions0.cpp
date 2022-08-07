#include <iostream>
using namespace std;

int main()
{
	int grate;
	cout<<"Enter your grade \n";
	cin>>grate;

	if(grate >= 90 && grate <= 100)
		cout<<"A\n";
	else if(grate >= 80 && grate < 90)
		cout<<"B\n";
	else if(grate >= 70 && grate < 80)
		cout<<"C\n";
	else if(grate >= 60 && grate < 70)
		cout<<"D\n";
	else
		cout<<"F\n";
}
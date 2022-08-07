#include <iostream>
using namespace std;

int main()
{
	int grate;
	cout<<"Enter your grade \n";
	cin>>grate;

	if(grate >= 60)
		cout<<"passed\n";
	else
		cout<<"failed\n";
}
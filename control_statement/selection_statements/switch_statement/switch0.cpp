#include <iostream>
using namespace std;

int main()
{
	int i;
	cout<<"enter value for i\n";
	cin>>i;

	switch(i)
	{
	case 10:
	case 20:
		cout<<"the user extered 10 or 20\n";
		break;
	case 30:
		cout<<"i am in case 3\n";
		break;
	default:
		cout<<"i am in default case\n";
	}
}
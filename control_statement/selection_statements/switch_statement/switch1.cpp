#include <iostream>
using namespace std;

int main()
{
	char cr = 'x';

	switch(cr)
	{
	case 'v':
		cout<<"i am in case v\n";
		break;
	case 'a':
		cout<<"i am in case a\n";
		break;
	case 'x':
		cout<<"i am in case x\n";
		break;
	default:
		cout<<"i am in default case\n";
	}
}
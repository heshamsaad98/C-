#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout<<"enter your grade\n";
	cin>>grade;

	switch(grade)
	{
	case 90:
		cout<<"You Got A\n";
		break;
	case 80:
		cout<<"You Got B\n";
		break;
	case 70:
		cout<<"You Got C\n";
		break;
	case 60:
		cout<<"You Got D\n";
		break;
	default:
		cout<<"Sorry, You Got F\n";
	}
}
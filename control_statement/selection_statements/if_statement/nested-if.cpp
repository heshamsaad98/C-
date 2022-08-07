#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"please enter any number\n";
	cin>>number;

	if(number >= 0)
		if(number % 2 == 0)
			cout<<"this is an even number\n";
		else
			cout<<"this is an odd number\n";
}
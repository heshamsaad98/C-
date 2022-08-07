#include <iostream>
using namespace std;

int main()
{
	int num1;
	cout<<"enter any number\n";
	cin>>num1;

	if(num1 >= 0 && num1 <=100)
		cout<<"the number is between 1 and 100\n";
	else
		cout<<"the number is larger than 100\n";
}
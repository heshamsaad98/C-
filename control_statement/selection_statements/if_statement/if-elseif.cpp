#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"enter number1, number2\n";
	cin>>num1>>num2;

	if(num1 == num2)
		cout<<"both area equal\n";
	else if(num1 > num2)
		cout<"number1 is greater than number2\n";
	else
		cout<"number2 is greater than number1\n";
return 0;
}
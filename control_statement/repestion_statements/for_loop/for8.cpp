#include <iostream>
using namespace std;

int main()
{
	int number, factorial = 1;
	cout<<"Enter a positive number\n";
	cin>>number;

	if(number < 0)
	{
		cout<<"Enter positive bumbers only\n";
	}
	else
	{
		for(int i = 1; i <= number; i++)
			factorial *= i;
		cout<<"Factorial = "<<factorial<<endl;
	}
}
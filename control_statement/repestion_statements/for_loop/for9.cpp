#include <iostream>
using namespace std;

int main()
{
	int factorial = 1;
	for(int number = 1; number <= 10; number++)
	{
		for(int i = 1; i <= number; i++)
		{
			factorial *= i;
		}
		cout<<"Factorial of "<<number<<" = "<<factorial<<endl;
	}
}
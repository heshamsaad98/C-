#include <iostream>
using namespace std;

int larger(int , int );

int main()
{
	int result = larger(20, 15);
	cout<<"The Larger number is "<<result<<"\n";
}

int larger(int num1, int num2)
{
	if(num1 >= num2)
		return num1;
	else
		return num2;
}
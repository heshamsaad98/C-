#include <iostream>
using namespace std;

int larger(int num1, int num2);

int main()
{
	int n1, n2, result;
	cout<<"Plase Enter 2 integer numbers\n";
	cin>>n1>>n2;
	result = larger(n1, n2);
	cout<<"The Larger number is "<<result<<"\n";
}

int larger(int num1, int num2)
{
	if(num1 >= num2)
		return num1;
	else
		return num2;
}
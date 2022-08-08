#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3 = 90);

int main()
{
	int n1, n2;
	cout<<"plase enter 2 integer numbers \n";
	cin>>n1>>n2;
	cout<<"the sum of the 3 number is "<<sum(n1, n2)<<"\n";
}

int sum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}
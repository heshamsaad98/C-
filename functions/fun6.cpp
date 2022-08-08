#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3);
int average(int num1, int num2, int num3);

int main()
{
	int n1, n2, n3;
	cout<<"please enter 3 integer numbers \n";
	cin>>n1>>n2>>n3;
	cout<<"the sum of the 3 number is "<<sum(n1, n2, n3)<<"\n";
	cout<<"the average of the 3 number is "<<average(n1, n2, n3)<<"\n";
}

int sum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

int average(int num1, int num2, int num3)
{
	return sum(num1, num2, num3)/3;	
}
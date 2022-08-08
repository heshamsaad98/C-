#include <iostream>
using namespace std;

int larger(int , int );

int main()
{
	int n1, n2;
	cout<<"Plase Enter 2 integer numbers\n";
	cin>>n1>>n2;
	cout<<"The Larger number is "<<larger(n1, n2)/2<<"\n";
}

int larger(int num1, int num2)
{
	if(num1 >= num2)
		return num1;
	else
		return num2;
}
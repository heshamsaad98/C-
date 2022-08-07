#include <iostream>
using namespace std;

int main()
{
	int number = 0, sum = 0;
	while(number >= 0)
	{
		cout<<"Enter Positive numbers to sum\n";
		cin>>number;
		sum += number;
	}
	cout<<"Sum = "<<sum<<"\n";
}
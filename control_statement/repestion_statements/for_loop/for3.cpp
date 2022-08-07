#include <iostream>
using namespace std;

int main()
{
	int number, sumeven = 0, sumodd = 0;

	for(int i = 0; i <= 9; i++)
	{
		cout<<"Enter number "<<i + 1<<"\n";
		cin>>number;
		if(number % 2 == 0)
			sumeven += number;
		else
			sumodd += number;
	}
	
	cout<<"The sum of even numbers is "<<sumeven<<"\n";
	cout<<"The sum of odd numbers is "<<sumodd<<"\n";
}
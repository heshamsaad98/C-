#include <iostream>
using namespace std;

int main()
{
	int grade = 0, sum = 0;

	for(int counter = 0; counter <= 5; counter++)
	{
		cout<<"Enter grade\n";
		cin>>grade;
		sum += grade;
	}
	
	cout<<"The Average grades is "<<sum / 6 <<"\n";
}
#include <iostream>
using namespace std;

int main()
{
	float sum = 0.0; 
	float salaries[10];
	
	for(int i = 0; i <= 9; i++)
	{
		cout<<"enter salary for employee no "<<i + 1<<"\n";
		cin>>salaries[i];
	}

	for (int index = 0; index <= 9; index++)
		salaries[index] += salaries[index] * 0.10;
	
	for(int i = 0; i <= 9; i++)
		sum += salaries[i];

	cout<<"the average salary is "<<sum/10<<"\n";
}
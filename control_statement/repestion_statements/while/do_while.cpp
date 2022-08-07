#include <iostream>
using namespace std;

int main()
{
	int counter = 0, sum = 0, grade = 0;

	do
	{
		cout<<"Enter grade for student no "<<counter+1<<"\n";
		cin>>grade;
		sum += grade;
		counter++;
	}
	while(counter <=5);
	
	cout<<"Average Grade is "<<sum/counter<<"\n";
}
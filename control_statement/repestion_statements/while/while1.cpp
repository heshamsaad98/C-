#include <iostream>
using namespace std;

int main()
{
	int grade = 0, sum = 0, counter = 0;
	cout<<"Enter 5 grades or -1 To Exit \n";

	while(counter <= 5)
	{
		cin>>grade;
		sum += grade;
		counter++;
	}
	cout<<"The sum of grades is "<<sum<<"\n";
}
#include <iostream>
using namespace std;

float clac_average(float marks[], int size);

int main()
{
	float marks[] = {100, 240, 250, 50, 70};
	cout<<clac_average(marks, 5)<<endl;
}

float clac_average(float arr[], int size)
{
	float sum = 0.0;

	for(int i = 0; i < size; i++)
		sum += arr[i];

	return sum / size;
}
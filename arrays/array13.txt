#include <iostream>
using namespace std;

int main()
{
	int matrix[4][2];

	for(int row = 0; row < 4; row++)
		for(int col = 0; col < 2; col++)
		{
			cout<<"enter value for item "<< row + 1<<","<<col + 1<<"\n";
			cin>>matrix[row][col];
		}

	int sum = 0;
	for(int row = 0; row < 4; row++)
		for(int col = 0; col < 2; col++)
		{
			sum = matrix[row][col];	
		}

	int sumdiagonal = 0;
	for(int row = 0; row < 4; row++)
		for(int col = 0; col < 2; col++)
			if(row == col)
				sumdiagonal += matrix[row][col];
	cout <<"the sum of all matrix items is "<<sum<<"\n";
	cout <<"the sum of all diagonal items is "<<sumdiagonal<<"\n";
}
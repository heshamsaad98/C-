#include <iostream>
using namespace std;

int main()
{
	float marks [6][4];
	for(int row = 0; row < 6; row++)
		for(int col = 0; col < 4; col++)
			marks[row] [col] = 1;

	marks[3][2] = 50;
	cout<<marks[3][2]<<endl;
}
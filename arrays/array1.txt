#include <iostream>
using namespace std;

int main()
{
	int list[6];
	list[0] = 5;
	list[1] = 20;
	list[2] = 40;
	list[3] = 30;
	list[4] = 10;
	list[5] = list[3] / list[4];
	cout<<list[5]<<"\n";
}
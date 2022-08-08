#include <iostream>
using namespace std;

int x = 100;
int main()
{
	int x = 10, y = 10;
	cout<<"Global X: "<<::x<<" Main X: "<<x<<" Y: "<<y<<"\n";
	{
		int z, x;
		z = 100;
		y = 100;
		x = 250;
		cout <<"Global X: "<<::x<<" internal x: "<<x<<"\n";
	}
}
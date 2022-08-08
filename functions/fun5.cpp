#include <iostream>
using namespace std;

float area(int radius);
float volume(int radius);

int main()
{
	int r;
	cout<<"please enter the sphere radius\n";
	cin>>r;
	cout<<"the sphere area is "<<area(r)<<"\n";
	cout<<"the sphere volume is "<<volume(r)<<"\n";
}

float area(int radius)
{
	return 4 * 3.14 * radius * radius;
}

float volume(int radius)
{
	return 4/3 * 3.14 * radius * radius * radius;
}
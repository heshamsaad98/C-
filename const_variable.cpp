#include <iostream>
using namespace std;

float sphere_area(int radius);
float sphere_volume(int radius);
const float pi = 3.14;

int main()
{
	int r;
	cout<<"enter spher_area & volume\n";
	cin>>r;
	cout<<"sphere_area = "<<sphere_area(r)<<"\n";
	cout<<"sphere_volume = "<<sphere_volume(r)<<"\n";
}

float sphere_area(int radius)
{
	return 4 * pi * radius * radius;
}

float sphere_volume(int radius)
{
	return 4/3 * pi * radius * radius * radius;
}
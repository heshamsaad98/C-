#include <iostream>
using namespace std;

struct distance_type
{
	int feet;
	float inches;
};

distance_type add_distance(distance_type d1, distance_type d2);

int main()
{
	distance_type x, y, z;
	cout<<"enter feet and inches for the 1st distance\n";
	cin>>x.feet>>x.inches;

	cout<<"enter feet and inches for the 2st distance\n";
	cin>>y.feet>>y.inches;

	z = add_distance(x, y);
	cout<<z.feet <<"\t"<<z.inches<<"\n";
}

distance_type add_distance(distance_type d1, distance_type d2)
{
	distance_type result;
	result.feet = d1.feet + d2.feet;
	result.inches = d1.inches + d2.inches;
	
	return result;
}
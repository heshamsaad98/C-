#include <iostream>
using namespace std;
int main()
{
	// this input from the user
	int length, width, area;

	cout<<"please enter rectangle length and width \n";
	cin>> length >> width;

	//processing
	area = length * width;

	//output
	cout<<"Area of rectangle equal "<< area <<"\n";

return 0;
}
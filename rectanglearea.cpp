#include <iostream>
using namespace std;
int main()
{
	// this input from the user
	int length;
	int width;
	int area;
	cout<<"please enter rectangle length \n";
	cin>>length;

	cout<<"please enter rectangle width \n";
	cin>>width;

	//processing
	area = length * width;

	//output
	cout<<area;

return 0;
}
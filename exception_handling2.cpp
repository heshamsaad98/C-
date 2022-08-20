#include <iostream>
using namespace std;

int main()
{
	int x = 0, y =0;
	cout<< "enter value for x and y"<< endl;
	cin>> x >> y;
	try
	{
		if(x <30)
			throw "x exception";
		if(y == 0)
			throw (500);
		cout << x / y << endl;
	}
	catch(...)
	{
		cout <<"Unhandeled Exception" << endl;
		cout <<"contant system admin" << endl;
	}
	cout << "The Program Continued"<< endl;
	cout << x + y + 100 << endl; 
	return 0;
}
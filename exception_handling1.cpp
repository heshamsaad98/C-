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
	catch(int e)
	{
		cout << "Division by zero Exception" <<endl;
		cout << "Y must be other than 0"<< endl;
	}
	catch(const char* msg)
	{
		cout << msg << endl;
		cout << "x must be greater than 30"<< endl;
	}
	cout << "The Program Continued"<< endl;
	cout << x + y + 100 << endl; 
	return 0;
}
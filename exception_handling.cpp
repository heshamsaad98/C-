#include <iostream>
using namespace std;

int main()
{
	int x = 0, y =0;
	cout<< "enter value for x and y"<< endl;
	cin>> x >> y;
	try
	{
		if(y == 0)
			throw exception();
		cout << x / y << endl;
	}
	catch(exception e)
	{
		cout << e.what()<<endl;
		cout << "please review your input"<< endl;
	}
	cout << "The Program Continued"<< endl;
	cout << x + y + 100 << endl; 
	return 0;
}
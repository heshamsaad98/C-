#include <iostream>
using namespace std;

int main()
{
	int arr[5] = {23, 5, 12, 34, 17};
	for(int i = 0; i < 5; i++)
		cout<<arr[i]<<endl;
	
	for(int i = 0; i < 5; i++)
		cout<<*(arr+i)<<endl;
}
#include <iostream>
using namespace std;

int main()
{
	char msg[] = "Hello";
	char* ptr;
	ptr = msg;
	*ptr = 'M';
	ptr++;
	*ptr = 'a';
}
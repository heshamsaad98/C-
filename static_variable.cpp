#include <iostream>
#include <string>
using namespace std;

void issue_ticket(int flight_no, string pname);

int main()
{
	string name;
	for(int i = 0; i <=2; i++)
	{
		cout<<"enter your name as written in your passport\n";
		cin>>name;
		issue_ticket(125, name);
	}
}

void issue_ticket(int flight_no, string pname)
{
	static int ticket_no;
	
	cout<<"\t \t****************************************************\n";
	cout<<"Flight No : "<<flight_no<<"\n";
	cout<<"Ticket No : "<<++ ticket_no<<"\n";
	cout<<"Issued For : "<<pname<<"\n\n";
}


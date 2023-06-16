#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;
string s;
void code()
{
	for(int i=0;i<s.size();i++)
	{
		s[i]=s[i]+10;
	}
}
void decode()
{
	for(int i=0;i<s.size();i++)
	{
		s[i]=s[i]-10;
	}	
}
void display()
{
	ofstream output("output.txt"); 
	for(int i=0;i<s.size();i++)
	{
		output<<s[i];
	} 
}
int main()
{
	ifstream input("input.txt");
	getline(input,s);
	int command;
	cin>>command;
	switch(command)
	{
		case 1: 
			code();
			display();
			break;
		case 2:
			decode();
			display();
			break;		
	}
}

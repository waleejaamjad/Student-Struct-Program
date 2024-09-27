#include<iostream>
using namespace std;

struct waleeja
{
	int num;
	string name;
	char value;
};
int main()
{
	waleeja data;
	
	cout<<" Enter the serial number of employ: \n";
	cin>> data.num;
	
	cout<<" Enter the name of employ: \n";
	cin>> data.name;
	
	cout<<" Enter the letter P if he is present and letter A if absent: \n";
	cin>> data.value;
	
	cout<<" So here is the complete info about the employ: \n";
	
	cout<< data.num <<endl;
	cout<< data.name <<endl;
	cout<< data.value <<endl;
	
	return 0;
}



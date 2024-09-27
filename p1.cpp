#include<iostream>
#include<iomanip>

using namespace std;

//structure
struct person
{
	char name[16];
	int age;
};

//function decleration
void dd(person);
person getdata(person);

int main()
{
	person p1,temp;
	
	temp = getdata(p1);
	p1 = temp;
	
	//call function
	dd(p1);
	
	return 0;
}

person getdata(person p1)
{
	//data from user
	cout<<"Enter name:"<<endl;
	cin.get(p1.name,16);
	
	cout<<"Enter age:"<<endl;
	cin>>p1.age;
return p1;}

void dd(person p1)
{	
	cout<<"Name:"<<p1.name<<endl;
	cout<<"Age:"<<p1.age<<endl;	
}
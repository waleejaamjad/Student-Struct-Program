#include<iostream>
using namespace std;

//structure
struct employee
{
	int employee_number;
	float employee_compensation;
};

//function declear
void display_data(employee)

//main function
int main()
{
	const int num=3;
	employee e[num];
	int i;
	
	cout<<"Enter the data for three employee: \n"<<endl;
	
	for(i=0;i<num;num++)
	{
		//data from user
		cout<<"Enter the name of employee: \n"<<endl;
		cin>>e[i].employee_compensation;
		cout<<"Enter the compensation od employee: \n"<<endl;
		cin>>e[i].employee_number;
	}
	
	//call the function
	
	
	
	
	
	
	
	return 0;	
}
void display_data(employee e[num])
{
	//display of data
	cout<<"The number of employee is "<<e[i].employee_compensation<<": \n"<<endl;
	cout<<"The compensation of employee is "<<e[i].employee_number<<": \n"<<endl;
	
	
	
}

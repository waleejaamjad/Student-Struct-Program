#include<iostream>
#include<iomanip>

using namespace std;

struct payinfo
{
	int hours;
	int payrate;
};

int main()
{
	const int num=3;
	payinfo w[num];
	int i;
	
	//info
	cout<<"Enter the numbers of workers: "<<endl;
	
	//for loop
	for(i=0;i<num;i++)
	{
		cout<<"hours worked by employee: "<< (i+1)<<endl;
		cin>> w[num].hours;
		
		cout<<"Hourly payrate of emloyee: "<< (i+1)<<endl;
		cin>> w[num].payrate;	
	}
	
	cout<<"Grosspay of each emloyee: "<<endl;
	
	for(i=0;i<num;i++)
	{
		double total;
		total=w[num].hours+w[num].payrate;
		cout<<i+1<<endl;
		cout<<"The gross pay of employee is:"<<total<<endl;
	}
	
	return 0;	
}






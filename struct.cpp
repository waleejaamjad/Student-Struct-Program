#include<iostream>
using namespace std;

struct student
{
	int id;
	string name;
	short yis;
	double gpa;
};
int main()
{
	student s;
	cout<< "Enter student id,name,year in school, gpa: " <<endl;
	cin>> s.id >> s.name >> s.yis >> s.gpa;
	
	cout<< "The id of student is: " << s.id <<endl;
	cout<< "The name of student is: " << s.name <<endl;
	cout<< "The year of student in school is: " << s.yis <<endl;
	cout<< "The gpa of student is: " << s.gpa <<endl;
	
	return 0;
}
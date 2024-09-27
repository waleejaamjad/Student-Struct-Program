#include<iostream>
using namespace std;

// Structure definition for a student
struct student
{
    int id;
    char name[20];
    char code[20];
    char cname[20];
    int marks;
};

int main()
{
    // Declare and initialize 3 student instances
    student s1={247010,"Waleeja Amjad","CS112L","OOP",85};
    student s2={247069,"Azka Asif","CS112L","OOP",80};
    student s3={247021,"Amna Nadeem","CS112L","OOP",90};

    // Calculate the total marks for all students
    int tmarks=(s1.marks+s2.marks+s3.marks);

    // Display the student details
    //student 01
    cout<<"Details of students:\n";
    cout<<"Student 1:"<<endl;
	cout<<"Student ID: "<<s1.id<<endl;
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Course Code: "<<s1.code<<endl;
	cout<<"Course Name: "<<s1.cname<<endl;
	cout<<"Marks: "<<s1.marks<<endl;
	cout<<"---------------"<<endl;
	
	//student 02 
    cout<<"Student 2:"<<endl;
	cout<<"Student ID: "<<s2.id<<endl;
	cout<<"Name: "<<s2.name<<endl;
	cout<<"Course Code: "<<s2.code<<endl;
	cout<<"Course Name: "<<s2.cname<<endl;
	cout<<"Marks: "<<s2.marks<<endl;
	cout<<"----------------"<<endl;
	
	//student 03
    cout<<"Student 3:" <<endl;
	cout<<"Student ID: "<<s3.id<<endl;
	cout<<"Name: "<<s3.name<<endl;
	cout<<"Course Code: "<<s3.code<<endl;
	cout<<"Course Name: "<<s3.cname<<endl;
	cout<<"Marks: "<<s3.marks<<endl;
	cout<<"-----------------"<<endl;

    // Display the total marks
    cout<<"Total marks of all students:"<<tmarks<<endl;

    return 0;
}

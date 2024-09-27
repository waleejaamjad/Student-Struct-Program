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
    student s1 = {247010, 'Waleeja Amjad', 'CS112L' , 'OOP' , 85};
    student s2 = {247069, 'Azka Asif', 'CS112L' , 'OOP' , 80};
	student s3 = {247021, 'Amna Nadeem', 'CS112L' , 'OOP' , 90};

    // Calculate the total marks for all students
    int tmarks = s1.marks + s2.marks + s3.marks;

    // Display the student details
    cout << "Details of students:\n";
    cout << "Student 1: Student ID: " << s1.id << ", Name: " << s1.name << ", Course Code: " << s1.code << ", Course Name: " << s1.cname << ", Marks of Course: " << s1.marks <<endl;
	cout << "Student 2: Student ID: " << s2.id << ", Name: " << s2.name << ", Course Code: " << s2.code << ", Course Name: " << s2.cname << ", Marks of Course: " << s2.marks <<endl;
    cout << "Student 3: Student ID: " << s3.id << ", Name: " << s3.name << ", Course Code: " << s3.code << ", Course Name: " << s3.cname << ", Marks of Course: " << s3.marks <<endl;

    // Display the total marks
    cout << "Total marks of all students: \n" << total_marks << endl;

    return 0;
}

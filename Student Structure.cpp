#include<iostream>
using namespace std;

//structure
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
    // Number of students
    const int num = 3; 
    // Array of students
    student s[num];     
    int i;

    cout << "Enter the details of students:" << endl;

    for (i = 0; i < num; i++)
    {
    	//data input from user
        cout << "Enter the student id for student " << (i + 1) << ":" << endl;
        cin >> s[i].id;
        cout << "Enter the name of student " << (i + 1) << ":" << endl;
        cin >> s[i].name;
        cout << "Enter the course code for student " << (i + 1) << ":" << endl;
        cin >> s[i].code;
        cout << "Enter the name of course for student " << (i + 1) << ":" << endl;
        cin >> s[i].cname;
        cout << "Enter the marks for student " << (i + 1) << ":" << endl;
        cin >> s[i].marks;
    }

    // Display data
    cout << "\nEntered student details: \n";
    for (i = 0; i < num; i++) 
	{
        cout << "Student " << (i + 1) << ": \n";
        cout << "Student ID: " << s[i].id << "\n";
        cout << "Name of student: " << s[i].name << "\n";
        cout << "Course Code is: " << s[i].code << "\n";
        cout << "Name of Courese is : " << s[i].cname << "\n";
        cout << "Marks obtained in that course are: " << s[i].marks << "\n";
    }
    return 0;
}

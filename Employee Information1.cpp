#include<iostream>
using namespace std;

// Structure definition
struct employee
{
    int employee_number;
    float employee_compensation;
};

// Function declaration
void display_data(employee e[], int num);

// Main function
int main()
{
    const int num = 3;
    employee e[num];
    int i;

    cout << "Enter the data for three employees: \n" << endl;

    for (i = 0; i < num; i++)
    {
        // Data input from user
        cout << "Enter the employee number for employee " << (i + 1) << ":" << endl;
        cin >> e[i].employee_number;
        cout << "Enter the compensation for employee " << (i + 1) << ":" << endl;
        cin >> e[i].employee_compensation;
    }

    // Call the function to display data
    display_data(e, num);

    return 0;
}

// Function definition to display data
void display_data(employee e[], int num)
{
    cout << "Employee details:" << endl;

    for (int i=0;i<num;i++)
    {
        // Displaying employee data
        cout << "Employee Number: " << e[i].employee_number << endl;
        cout << "Employee Compensation: " << e[i].employee_compensation << endl;
        cout << "_________________________ " << endl;
    }
}

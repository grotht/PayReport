
// Assignment 4 - Pay Report

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee 
{
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

Employee* GetEmployeeInfo(int num)
{
    Employee* pE = new Employee;

    num++;
    cout << "Enter the ID for Employee " << num << ": ";
    cin >> pE->ID;
    cout << "Enter the First Name for Employee " << num << ": ";
    cin >> pE->FirstName;
    cout << "Enter the Last Name for Employee " << num << ": ";
    cin >> pE->LastName;
    cout << "Enter the Hours Worked for Employee " << num << ": ";
    cin >> pE->HoursWorked;
    cout << "Enter the Hourly Rate for Employee " << num << ": ";
    cin >> pE->HourlyRate;
    cout << "\n";

    return pE;
}

void PrintPayReport(Employee* array, int size)
{
    cout << "Pay Report\n";
    cout << "----------\n";

    float totalPay = 0;

    for (int i = 0; i < size; i++)
    {
        float weeklyPay = array[i].HoursWorked * array[i].HourlyRate;
        totalPay += weeklyPay;
        cout << array[i].ID << ". ";
        cout << array[i].FirstName << " " << array[i].LastName;
        cout << ": $" << weeklyPay << "\n";
    }
    
    cout << "\nTotal Pay: $" << totalPay;
}

int main()
{
    cout << "Enter the number of employees: ";
    int size = 0;
    cin >> size;
    cout << "\n";

    Employee* employees = new Employee[size];

    for (int i = 0; i < size; i++)
    {
        employees[i] = *GetEmployeeInfo(i);
    }

    PrintPayReport(employees, size);

	(void)_getch();
	return 0;
}

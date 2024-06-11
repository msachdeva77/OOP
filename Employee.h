
/*==============================================
Name:           Mannat Sachdeva
Student Number: 148832231
Email:          msachdeva7@myseneca.ca
Section:        ZDD
Workshop:       Workshop 2 - Part 1
Date:           05-25-2024
I have done all the coding by myself and only 
copied the code that my professor provided to 
complete my workshops and assignments.
==============================================*/
#ifndef SENECA_EMPLOYEE_H_
#define SENECA_EMPLOYEE_H_

#define DATAFILE "employees.csv"
namespace seneca {
    struct Employee {
        char* m_name;
        int m_empNo;
        double m_salary;
    };
    //sorts the dynamic array of employees based on the GPA of the employees.
    void sort();
    // loads a employee structue with its values from the file
    bool load(Employee &emp);
    // allocates the dyanmic array of employees and loads all the file
    // recoreds into the array
    bool load();

    // TODO: Declare the prototype for the display function that
    // displays a employee record on the screen:
    void display(const Employee& emp);
    // TODO: Declare the prototype for the display function that 
    // first sorts the employees then displays all the employees on the screen
    void display();
    // TODO: Declare the prototype for the deallocateMemory function that
    // first will deallocate all the names in the employee elements
    // then it will deallocate the employee array 
    void deallocateMemory();
}
#endif // SENECA_EMPLOYEE_H_
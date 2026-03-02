// Student Result.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Student
{
private:

    string student_name;
    int marks;

public:
    void set_student_data(string name, int mark)
    {
        student_name = name;

        if (mark >= 0 && mark <= 100)
        {
            marks = mark;
        }
        else
        {
            marks = 0;
        }
        
    }
    bool is_pass()
    {
        return marks >= 40;
    }

    void display_result()
    {
        cout << "Student Name: " << student_name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Result: " << (is_pass() ? "Pass" : "Fail") << endl;
    }
};

int main()
{
    Student student_1;

    student_1.set_student_data("Asha", 55);
    student_1.display_result();

    return 0;
    
 }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

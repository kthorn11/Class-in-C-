// 2D Marks Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MarksTable
{
private:
    int marks[3][4];

public:
    void input_marks()
    {
        for (int student_index = 0; student_index < 3; student_index++)
        {
            cout << "Enter marks for Student " << student_index + 1 << " (4 subjects):" << endl;

            for (int subject_index = 0; subject_index < 4; subject_index++)
            {
                cout << "Subject " << subject_index + 1 << ": ";
                cin >> marks[student_index][subject_index];
            }
        }
    }

    void display_marks()
    {
        cout << "\nMarks Table (3 x 4):\n";
        for (int student_index = 0; student_index < 3; student_index++)
        {
            cout << "Sudent " << student_index + 1 << ": "; 
            for (int subject_index = 0; subject_index < 4; subject_index++)
            {
                cout << marks[student_index][subject_index] << " ";
            }
            cout << endl;
        }
    }


    void display_student_avearge(int student_index)
    {
        int sum = 0;

        for (int subject_index = 0; subject_index < 4; subject_index++)
        {
            sum += marks[student_index][subject_index];
        }

        float average = sum / 4.0;
        cout << "Average of Student " << student_index + 1 << " # " << average << endl;
    }

};


int main()
{
    
    MarksTable marks_table;

    marks_table.input_marks();
    marks_table.display_marks();
    marks_table.display_student_avearge(0);



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

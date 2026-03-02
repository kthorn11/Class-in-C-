// Rectangle (Area and Perimeter).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;


public:

    void set_dimensions(float rect_length, float rect_width)
    {
        length  = rect_length;
        width = rect_width;
    }
    float get_area()
    {
        return length *  width;
    }
    float get_perimeter()
    {
        return 2 * (length + width);
    }
    void display_details()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << get_area() << endl;
        cout << "Perimeter: " << get_perimeter() << endl;
    }


};

int main()
{
    Rectangle rect_1;

    rect_1.set_dimensions(5.0, 3.0);
    rect_1.display_details();


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

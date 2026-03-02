// Phone Battery Level (Charging and Using).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class PhoneBattery
{
private:

    int battery_level;


public:
    PhoneBattery()
    {
        battery_level = 50;
    }
    void charge(int amount)
    {
        if (amount > 0)
        {
            battery_level += amount;
            if (battery_level > 100)
            {
                battery_level = 100;
            }

        }
    }

    void use_phone(int minutes)
    {
        if (minutes > 0)
        {
            battery_level -= minutes;
            if (battery_level < 0)
            {
                battery_level = 0;
            }

        }
    }


    void display_battery()
    {
        cout << "Battery Level: " << battery_level << endl;
    }
};




int main()
{
    PhoneBattery phone_1;


    phone_1.display_battery();
    phone_1.use_phone(20);
    phone_1.display_battery();
    phone_1.charge(40);
    phone_1.display_battery();

    
    
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

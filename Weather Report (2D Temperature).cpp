// Weather Report (2D Temperature).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


class WeatherReport
{private:

    float temp[7][2];

public:
    void input_temperature()
    {
        for (int day = 0; day < 7; day++)
        {
            cout << "Day " << day + 1 << " Morning temp: ";
            cin >> temp[day][0];



            cout << "Day " << day + 1 << " Evening temp: ";
            cin >> temp[day][1];
        }
    }


    void display_temperature()
    {
        cout << "\nTemperature (Morning, Evening):\n";
        for (int day = 0; day < 7; day++)
        {
            cout << "Day " << day + 1 << ": " << temp[day][0] << ", " << temp[day][1] << endl;
        }
    }

    void display_hottest_day()
    {
        int hottest_day_index = 0;
        float max_avg = (temp[0][0] + temp[0][1]) / 2.0;


        for (int day = 1; day < 7; day++)
        {
            float day_avg = (temp[day][0] + temp[day][1]) / 2.0;


            if (day_avg > max_avg)
            {
                max_avg = day_avg;
                hottest_day_index = day;
            }
        }

        cout << "Hottest Day: Day " << hottest_day_index + 1 << " (Avg = " << max_avg << ")" << endl;
    }

};

int main()
{
    WeatherReport report;

    report.input_temperature();
    report.display_temperature();
    report.display_hottest_day();

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

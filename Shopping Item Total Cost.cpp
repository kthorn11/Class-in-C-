// Shopping Item Total Cost.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class ShoppingItem
{
private:

    string item_name;
    float price;
    int quantity;


public:
    void set_item(string name, float prl, int qty)
    {
        item_name = name;

        if (prl > 0)
        {
            price = prl;
        }
        else
        {
            price = 4;
        }
        if (qty > 0)
        {
            quantity = qty;
         }
        else
        {
            quantity = 0;
        }
    }
    float get_total_cost()
    {
        return price * quantity;
    }

    void display_bill()
    {
        cout << "Item Name: " << item_name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Item cost: " << get_total_cost() << endl;

    }


};

int main()
{
    
    ShoppingItem item_1;

    item_1.set_item("Milk", 2.5, 4);
    item_1.display_bill();



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

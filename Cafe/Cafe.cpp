// Cafe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Item.h"

void AddMenuItems();
void Cafe();
void DisplayMenu();
int GetInput();
void Buy(int index);
void Checkout();
void End();

float total = 0;
std::vector<Item*> available_items;

int main()
{
    AddMenuItems();
    Cafe();

    int x;
    std::cin >> x;
    return 0;
}

void AddMenuItems()
{
    available_items.push_back(new Coffee());
    available_items.push_back(new Pancakes());
    available_items.push_back(new Waffles());
    available_items.push_back(new Brownie());
    available_items.push_back(new Bacon());
    available_items.push_back(new Sausage());
    available_items.push_back(new Parfait());
    available_items.push_back(new Muffin());
}

void Cafe()
{
    DisplayMenu();
    int choice = GetInput();
    if (choice - 1 == available_items.size())
    {
        Checkout();
    }
    else
    {
        Buy(choice);
    }
}

void DisplayMenu()
{
    std::cout << "Here are the items available now: " << std::endl;

    for (int i = 0; i < available_items.size(); i++)
    {
        std::cout << i + 1 << ". " << available_items[i]->name << "\t $" << available_items[i]->price << "\n";
    }

    std::cout << available_items.size() + 1 << ". Checkout" << std::endl;
}

int GetInput()
{
    int choice = 0;

    std::cout << "What would you like to order?" << std::endl;

    std::cin >> choice;

    return choice;
}

void Buy(int index)
{
    available_items[index - 1]->Purchase(total);

    std::cout << "Your total is now $" << total << std::endl;

    Cafe();
}

void Checkout()
{
    float amount_paid = 0;

    std::cout << "Your total is $" << total << std::endl;
    std::cout << "Input your amount paid: " << std::endl;

    std::cin >> amount_paid;

    if (amount_paid > total)
    {
        std::cout << "Your change is $" << amount_paid - total << std::endl;

        End();
    }
    else if (amount_paid < total)
    {
        total -= amount_paid;

        std::cout << "You still owe $" << total << std::endl;
        Checkout();
    }
    else
    {
        End();
    }

}

void End()
{
    std::cout << "Thanks! Have a good day!" << std::endl;
}
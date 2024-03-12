// REBinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "FixedRE.h"
using namespace std;
const int MAX_ITEMS = 18;
void BubbleSorting(int values[], int numValues);
void BubbleUp(int values[], int startIndex, int endIndex);
void Swap(int& item1, int& item2);
int main()
{
    int values[MAX_ITEMS] = { 40023, 40028, 40029, 40032, 40034, 40035, 40038, 40045, 40047, 40049, 40051, 40054, 40057, 40068, 40070, 40052, 40032, 40071 };

    cout << "Before Sort: " << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << values[i] << ' ';
    }
    cout << endl;

    BubbleSorting(values, MAX_ITEMS);

    cout << "After Sort: " << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    char choice;
    do {
        int item = 0;
        cout << "Please enter the number you want to search for: ";
        cin >> item;
        int count = 0;
        bool found;

        FixedRE<int> binarySearch;

        binarySearch.Search(values, MAX_ITEMS, item, found, count);

        if (found) {
            cout << "Item found in the list." << endl;

        }
        else {
            cout << "Item not found in the list." << endl;

        }
        cout << count << endl;
        cout << "Do you wish to continue? y/n ";
        cin >> choice;
    } while (choice == 'y');
}

void BubbleSorting(int values[], int numValues)
{
    for (int current = 0; current < numValues - 1; current++)
    {
        BubbleUp(values, current, numValues - 1);
    }
}

void BubbleUp(int values[], int startIndex, int endIndex)
{
    for (int index = endIndex; index > startIndex; index--)
    {
        if (values[index] < values[index - 1])
        {
            Swap(values[index], values[index - 1]);
        }
    }
}

void Swap(int& item1, int& item2)
{
    int tempItem = item1;
    item1 = item2;
    item2 = tempItem;
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

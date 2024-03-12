// CompSorts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int BubbleSort(int values[], int numValues, int& count);
void BubbleUp(int values[], int startIndex, int endIndex, int& count);
void Swap(int& item1, int& item2);

const int MAX_ITEMS = 8;

int main()
{
    int values[MAX_ITEMS];

    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << "Enter Item: ";
        cin >> values[i];
    }

    cout << "Before Sort: " << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << values[i] << ' ';
    }
    cout << endl;

    int Counter = 0; 
    int count = BubbleSort(values, MAX_ITEMS, Counter);

    cout << "After Sort: " << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    cout << "Number of comparisons: " << Counter << endl;

    return 0;
}

int BubbleSort(int values[], int numValues, int& count)
{
    int current = 0;
    while (current < numValues - 1)
    {
        BubbleUp(values, current, numValues - 1, count); 
        current++;
    }
    return current;
}

void BubbleUp(int values[], int startIndex, int endIndex, int& count)
{
    for (int index = endIndex; index > startIndex; index--)
    {
        count++;
        if (values[index] > values[index - 1])
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

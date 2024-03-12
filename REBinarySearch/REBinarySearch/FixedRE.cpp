/*

#include "FixedRE.h"
template<class ListType>
int FixedRE<ListType>::Search(ListType list[], int size, int item, bool& found, int& count)
{
    int first = 0;
    int last = size - 1;
    int midPoint;
    found = false;
    count = 0;

    while (first <= last) {
        midPoint = (first + last) / 2;
        if (item == list[midPoint]) {
            found = true;
            return midPoint;
        }
        else if (item > list[midPoint]) {
            first = midPoint + 1;
        }
        else {
            last = midPoint - 1;
        }
        count++;
    }

    return -1;
}
*/
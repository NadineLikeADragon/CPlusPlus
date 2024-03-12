#include "BinarySearch.h"
template<class ListType>
void BinarySearch<ListType>::Search(ListType list[], int size, int item, bool& found, int& count)
{
    int midPoint;
    int first = 0;
    int last = size - 1;
    bool moreToSearch = first <= last;
    found = false;
    count = 0;

    while (moreToSearch && !found)
    {
        midPoint = (first + last) / 2;
        if (item < list[midPoint])
        {
            last = midPoint - 1;
            moreToSearch = first <= last;
        }
        else if (item > list[midPoint])
        {
            first = midPoint + 1;
            moreToSearch = first <= last;
        }
        else
        {
            found = true;
        }
        count++;
    }
}
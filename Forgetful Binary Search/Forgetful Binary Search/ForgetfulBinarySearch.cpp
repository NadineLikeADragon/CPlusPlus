#include "ForgetfulBinarySearch.h"
template<class ListType>
int ForgetfulBinarySearch<ListType>::forgetfulBinarySearch(ListType list[], int size,int item, bool& found, int& count)
{
    int first = 0;
    int last = size - 1;
    int midPoint;
    found = false;

    while (first <= last)
    {
        midPoint = (first + last) / 2;
        if (item > list[midPoint])
            first = midPoint + 1;
        else if (item < list[midPoint])
            last = midPoint - 1;
        else 
        {
            found = true;
            return midPoint;
        }
        count++;
    }

    return -1;
}


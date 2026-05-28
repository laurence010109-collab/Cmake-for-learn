#include "sort.h"

void selectSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            int tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
        }
    }
}

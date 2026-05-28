#include <iostream>
#include "sort.h"

using namespace std;

int main()
{
    int arr1[] = {9, 1, 5, 3, 7, 2, 8, 4, 6, 0};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    cout << "插入排序前: ";
    for (int i = 0; i < size; i++) cout << arr1[i] << " ";
    cout << endl;

    insertSort(arr1, size);

    cout << "插入排序后: ";
    for (int i = 0; i < size; i++) cout << arr1[i] << " ";
    cout << endl;

    int arr2[] = {9, 1, 5, 3, 7, 2, 8, 4, 6, 0};

    cout << "选择排序前: ";
    for (int i = 0; i < size; i++) cout << arr2[i] << " ";
    cout << endl;

    selectSort(arr2, size);

    cout << "选择排序后: ";
    for (int i = 0; i < size; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}

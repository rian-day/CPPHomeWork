//
// Created by 10513 on 2018/3/20.
//

#include "sort.h"
#include <iostream>
using namespace std;

void sort::numSort(int *a, int length) {
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < length; i++)
        cout << a[i] << " ";
    cout << endl;

}

void sort::numSort(float *a, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < length; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sort::numSort(double *a, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < length; i++)
        cout << a[i] << " ";
    cout << endl;

}

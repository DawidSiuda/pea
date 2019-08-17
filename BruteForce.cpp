#include "BruteForce.h"
#include <iostream>
#include <algorithm>
using namespace std;

/*
    REMEMBER TO ADD THE LAST EDGE!!!!!!!!!!!!!
*/

int sumCosts(int *arr, int **costs, int size)
{
    int sum = 0;
    for (int i = 1; i < size; i++)
    {
        sum += costs[arr[i - 1]][arr[i]];
    }
    sum += costs[arr[size - 1]][arr[0]];
    return sum;
}

/*
    default: starts with 0
    to search everything remove '1' from line 41
*/

Path *findShortestPath(int *arr, int **costs, int size)
{
    Path *result = new Path();
    result->cost = sumCosts(arr, costs, size);
    result->shortestPath = arr;

    sort(arr, arr + size);

    do
    {
        if (result->cost > sumCosts(arr, costs, size))
        {
            result->cost = sumCosts(arr, costs, size);
            result->shortestPath = arr;
        }
    } while (next_permutation(arr + 1, arr + size));

    return result;
}

void printResult(Path *p, int size)
{
    cout << "Cost: " << p->cost << ", path: ";
    for (int i = 0; i < size; i++)
    {
        cout << p->shortestPath[i] << " ";
    }
    cout << endl;
}

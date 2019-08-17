#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

struct Path
{
    int cost;
    int *shortestPath;
};

int sumCosts(int *arr, int **costs, int size);

Path *findShortestPath(int *a, int **costs, int n);

void printResult(Path *p, int size);

#endif // BRUTEFORCE_H
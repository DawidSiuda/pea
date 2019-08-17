#include <iostream>
#include <climits>
#include "Reader.h"
#include "BruteForce.h"

using namespace std;

int main()
{
    Reader * reader = new Reader("./testfiles/tsp_6_1.txt");
    reader->printTab();

    Path * p = findShortestPath(reader->vertices, reader->tab, reader->elementsNumber);
    printResult(p, reader->elementsNumber);

    return 0;
}
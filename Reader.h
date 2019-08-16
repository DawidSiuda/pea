#ifndef READER_H
#define READER_H

#include <iostream>
#include <fstream>

using namespace std;

class Reader
{
public:
    Reader(const char * const filname);
    ~Reader();

    void printTab();

private:
    int elementsNumber;
    int** tab;
};

#endif //READER_H
#include <iostream>
#include "Reader.h"

int main()
{
    Reader * reader = new Reader("input.txt");
    reader->printTab();
    return 0;
}
#ifndef READER_H
#define READER_H

class Reader
{
    Reader(char *filname);
    ~Reader();

private:
    int elementsNumber;
    int** tab;
};

#endif //READER_H
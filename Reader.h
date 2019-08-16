#ifndef READER_H
#define READER_H

class Reader
{
public:
    Reader(char *filname);
    ~Reader();
    void printTab();

private:
    int elementsNumber;
    int** tab;
    void read(char * filename);
};

#endif //READER_H
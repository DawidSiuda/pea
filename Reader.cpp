#include "Reader.h"
#include <fstream>
#include <iostream>
using namespace std;

Reader::Reader(char *filname)
{
    this->read(filname);
}

void Reader::read(char *filename)
{
    fstream file;
    file.open(filename, ios::in);

    if (file.good())
    {
        file >> elementsNumber;
        tab = new int *[elementsNumber];

        for (int i = 0; i < elementsNumber; i++)
        {
            tab[i] = new int[elementsNumber];
            for (int j = 0; j < elementsNumber; j++)
            {
                file >> tab[i][j];
            }
        }
    }
    else
        cout << "DUPA" << endl;

    file.close();
}

void Reader::printTab()
{
    cout << "elementsNumber: " << elementsNumber << endl;
    for (int i = 0; i < elementsNumber; i++)
    {
        for (int j = 0; j < elementsNumber; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

Reader::~Reader()
{

    //
    // Delete tab;
    //

    for (int i = 0; i < elementsNumber; i++)
    {
        delete tab[i];
    }

    delete tab;
}

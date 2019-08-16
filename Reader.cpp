#include "Reader.h"
#include <fstream>
#include <iostream>
using namespace std;

Reader::Reader(char *filname)
{
    //
    // To do, read file and create tab.
    //

    elementsNumber = 6;

    tab = new int *[elementsNumber];

    for (int i = 0; i < elementsNumber; i++)
    {
        tab[i] = new int[elementsNumber];
    }

    read(filname);
}

void Reader::read(char *filename)
{
    fstream file;
    file.open(filename, ios::in);

    if (file.good())
    {
        for (int i = 0; i < elementsNumber; i++)
        {
            for (int j = 0; j < elementsNumber; j++)
            {
                file >> tab[i][j];
            }
            //cout << endl;
        }
    }
    else
        cout << "DUPA" << endl;

    file.close();
}

void Reader::printTab()
{
    //cout << "Dupa:" << endl;
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

#include "Reader.h"

Reader::Reader(char *filname)
{
    //
    // To do, read file and create tab.
    //

    elementsNumber = 6;

    tab =  new int*[elementsNumber]; 

    for( int i = 0; i < elementsNumber; i++)
    {
        tab[i] = new int[elementsNumber]; 
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

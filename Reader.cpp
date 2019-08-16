#include "Reader.h"

Reader::Reader(const char * const filename)
{
    std::string line;
	std::string temp;
    std::fstream file;

	int size = 0;

    //
    // Open file.
    //

	file.open(filename, std::ios::in);	

	if (file.good() == false)
	{
		cout << " --> ERROR: Cannot read file:  " << filename <<  endl;

		return ;
	}

	cout << " --> Opened file: " << filename <<  endl;

    //
    // Read size from first line.
    //

    getline(file, line);

    elementsNumber = atoi(line.c_str());

  	cout << " --> Got node numbers: " << elementsNumber <<  endl;

    //
    // Create tab with got size and read data.
    //

    tab =  new int*[elementsNumber]; 

    for( int i = 0; i < elementsNumber; i++)
    {
        tab[i] = new int[elementsNumber];
        for(int k = 0; k < elementsNumber; k++)
        {
            file >> tab[i][k];
        }
    }

    //
    // Close file.
    //

	file.close();
}

void Reader::printTab()
{
    std::cout << "TAB:"<< std::endl; 

    for(int i = 0; i< elementsNumber; i++)
    {
        for (int k = 0; k < elementsNumber; k++)
        {
            std::cout << tab[i][k] << " "; 
        }
        
        std::cout << std::endl; 
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

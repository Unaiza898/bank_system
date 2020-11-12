#include "Header.h"



//Rewrites the file completely.
//cin.ignore() clears the input space. should be put before any input space.

int writeFile()
{
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
	return 0;
}



//Should add to the end of the file.
//myfile.is_open() returns a boolean

int addToFile()
{
	ofstream myfile;
	myfile.open("example.txt", ios::ate | ios::app);
	myfile << "Adding to the file.\n";
	myfile.close();
	return 0;
}


//Reading text files
//file.read()		//returns number of bytes from file default of whole file

//file.eof()		// return bool, if it is the end of the file

int readFile()
{
	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << "\n";
		}
		myfile.close();
	}
	else cout << "unable to open file";

	return 0;
}


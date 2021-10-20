#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	fstream myFile;
	myFile.open("ascii.txt", ios::in); //write mode
	if (myFile.is_open()) {
		string line;
		while (getline(myFile,line) ){
		
			cout << line << endl;
		
	}

	
	}

	
		

		myFile.close();
	}
	







// cpp_filess.cpp : Bu dosya 'main' iÅŸlevi iÃ§eriyor. Program yÃ¼rÃ¼tme orada baÅŸlayÄ±p biter.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	fstream myFile;
	myFile.open("enes.txt", ios::in);//read mode

	if (myFile.is_open()) {
		string line;
		while (getline(myFile,line)) {
			cout << line << endl;
		


		}

	}





	system("pause>0");

}

// cpp_filess.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	fstream myFile;
	myFile.open("enes.txt", ios::out); //write mode
	if (myFile.is_open()) {

		myFile << "Hello \n";
		myFile << "merhabaaaaaa \n";

		myFile.close();
	}
  myFile.open("enes.txt", ios::app); //write mode
	if (myFile.is_open()) {

			
			myFile << "asdasdsadsad \n";

			myFile.close();



	}
	

	//system("pause>0");

}


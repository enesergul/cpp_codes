
#include <iostream>
#include <string>

using namespace std;


class Printer {
	string _name;
	int _availablePaper;
public:
	Printer(string name,int paper) {
		_name = name;
		_availablePaper = paper;
	}

	void Print(string txtDoc) {
		int requiredPaper = txtDoc.length() / 10;

		if (requiredPaper > _availablePaper)
			throw "No paper";
		

		cout << "Printing .... " << txtDoc << endl;
		_availablePaper -= requiredPaper;

			}
};


int main()
{
	Printer myPrinter("Hp yazici ", 5);

	try {
	myPrinter.Print(" Yaziyormu acebaaa.");
	myPrinter.Print(" Yaziyormu acebaaa.");
	myPrinter.Print(" Yaziyormu acebaaa.");
	myPrinter.Print(" Yaziyormu acebaaa.");
	myPrinter.Print(" Yaziyormu acebaaa.");
	myPrinter.Print(" Yaziyormu acebaaa.");
	myPrinter.Print(" Yaziyormu acebaaa.");

	}

	catch (const char * txtException) {

		cout << "Exception : " << txtException << endl;

	}



	return 0;
}

#include <iostream>

using namespace std;


int main(){
	
string s;
char *p="evren";

s=p;

cout <<s.size()<< endl;

s.append(" buyuk");

cout << s << endl;

cout << s.substr(2,8) << endl;
	
	
	
	
}

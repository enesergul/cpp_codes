//Pointers belasý

#include <iostream>


using namespace std;

int main(){
int a=10;
int *p;
p=&a;

cout << "a ------" << a <<endl;

cout << "*p ------ "<< *p << endl;

cout << "a& ------" << &a <<endl;

int x[4]={1,2,3,7};

int *q;
q=x;

cout<< q[3];
	
}

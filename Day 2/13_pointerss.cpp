//Pointers belasý

#include <iostream>


using namespace std;

int pointerbelasi(int *x,int *y, int *z);


int pointerbelasi(int *x,int *y, int *z){
	*x=40;
	*y=90;
	*z=100;
	
	return 50;
	
	
	
}

int main(){
int a=10,b=10,c=10;
int *p,*q,*r;
p=&a;
q=&b;
r=&c;

pointerbelasi(p,q,r);

cout << " p =" << *p << endl;
cout << " q =" << *q << endl;
cout << " r =" << *r << endl;



	
}

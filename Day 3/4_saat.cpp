#include <iostream>

using namespace std;


int main(){
cout << " saati giriniz"<<endl;

char a[11];

cin >>a ;

if(a[8]=='P'){

char x[3];


x[0]=a[0];
x[1]=a[1];
x[2]=a[2];


int saat=0;

saat +=(x[0]-48)*10;
saat +=(x[1]-48);
saat+=12;


a[0]=(char)48+saat/10;

a[1]=(char)48+saat%10; 

cout  << a;


}
	
	
}

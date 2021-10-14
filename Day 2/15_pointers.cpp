//Pointers belasý

#include <stdlib.h> // malloc burda calisiyor.
#include <iostream>


using namespace std;

int function (int *p);

int function (int *p){
	
	p[2]=20;
	
}

int topla (int *p, int boyut){
	int toplam=0;
	for(int i=0;i<boyut;i++){
		toplam+=p[i];
	}
	return toplam;
}

int main(){

	
int a[3]={1,2,3};
int *p=(int *)malloc(sizeof(int)*3);

p=a;

cout << a[2]<<endl;

function(p);

cout << a[2]<<endl;


cout << "toplam : " << topla(a,3) << endl;





	
}

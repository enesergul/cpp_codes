//Pointers belasý

#include <stdlib.h> // malloc burda calisiyor.
#include <iostream>


using namespace std;

int main(){
	int i;
cout <<"lutfen 5 sayi giriniz"<<endl;

int *p=(int *)malloc(sizeof(int)*5);

for(i=0;i<5;i++){
	cin >> *(p+i);

	
}

for(i=0;i<5;i++){
	
	cout << *(p+i);
	
}





	
}

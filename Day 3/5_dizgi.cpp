#include <iostream>

using namespace std;


char *function (char *s){
int b;	


	
}

int main(){
char c[100];
int i=0;
bool x;
cout << "lutfen kelime griniz "<< endl;

cin >> c;

while(c[i]!='\0'){

i++;
}
cout << "boyutu :" << i <<endl;
int b=0;

while(b!=i){

if(c[b]!=c[i-b-1]){

	 x=1;
	 
}
	b++;		
}	


if(x==1)cout << "palindrom deðildir" <<endl;
else cout << "palindrom " <<endl;	
}

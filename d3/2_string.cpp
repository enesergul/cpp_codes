#include <iostream>

using namespace std;

int boyut(char *s){
	int b=0;
	char c=s[0];
	while (c!='\0'){
		c=s[b++];
	}
	
	return b;
	
}


int main(){
	char *s="evren";
	
	cout << s <<endl;
	
	cout<<s[2] <<endl;
	char c[6]="evren";
	char a[5];
	a[0]='e';// "e"-> e,/0
	
	
	
	cout << boyut(s)<< endl;
		cout << boyut(c)<< endl;
	
}

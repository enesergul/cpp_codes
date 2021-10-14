#include <iostream>

using namespace std;


int main(){
char c[100];
int i=0;

cout << "lutfen kelime griniz "<< endl;


cin >> c;

char *p,*q;
p=c;
q=c;

while(*q!='\0'){

q++;
}
q--;
bool palindrome=true;

while(q>p){
	if(*p!=*q){
			palindrome=false;
	}
		p++;
		q--;
	
}
if(palindrome) cout<< "palindromdur" <<endl;
else cout << "palindrome degildir" << endl;


}

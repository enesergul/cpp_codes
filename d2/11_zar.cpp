#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	cout < "kac tane zar atilsin";
	int n;
	cin >> n;
	int i,k,a[n],b[n];
	
int atoplam=0;
   int btoplam=0;
	

 
    
    
	for(i=0;i<n;i++){
		
    a[i]=1+rand()%6;
    b[i]=1+rand()%6;
   	}	
	
	
	for(i=0;i<n;i++){

   
   atoplam=a[i]+atoplam;
   btoplam=b[i]+btoplam;
   cout << "\n";
   cout<<"a[i]="<< a[i] << endl;
   
   cout<<"b[i]="<< b[i] << endl;
   
   
	}	
	
	cout << " a oyuncusunun toplami =" << atoplam << endl;
	
	cout << " b oyuncusunun toplami =" << btoplam << endl;
	
	if(atoplam>btoplam){ cout<< "A oyuncusu kazandi.";
	}
	else if(atoplam<btoplam){ 
	cout << "B oyuncusu kazandi";} 
	else {
	cout<< " Bereabere";}
	 
	 
	 
}

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	int i,k,b,a[20];
	

 
    
    
	for(i=0;i<20;i++){
		
    a[i]=5+rand()%20;
    
   	}	
	
	
	for(i=0;i<20;i++){
   
   cout<<i+1<<".eleman"<< a[i] << endl;

	}	
	
     int enbuyuk=a[0];
     
     for(i=0;i<20;i++){
     	if(a[i]>enbuyuk){
		
     	enbuyuk=a[i+1];
     	 }
     	
	 }
	 
	 cout << enbuyuk;
	 
	 
	 
}

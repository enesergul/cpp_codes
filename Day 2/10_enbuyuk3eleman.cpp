#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] < arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

int main(){
	int i,k,b,a[10];        
	for(i=0;i<10;i++){
		
    a[i]=5+rand()%10;    
   	}	
	
	for(i=0;i<10;i++){
   
   cout<<i+1<<".eleman"<< a[i] << endl;

	}	
	
    bubbleSort(a,10);
    
	 	for(i=0;i<10;i++){   
   cout<<i+1<<".eleman siralanmis"<< a[i] << endl;

	}	
	 
	 int ortalama=(a[0]+a[1]+a[2])/3;
	 
	 cout <<"en buyuk 3 sayinin ortalamasý :" <<ortalama << endl;
	 
	  int ort=0;
	  long double carp=1;
	  
	 	for(i=0;i<10;i++){
   
       ort=a[i]+ort;
       carp=a[i]*carp;

	}	
	cout <<" Aritmetik ortalama :" <<ort/10 <<endl;
	cout <<" Geometrik ortalama :" <<carp/10 << endl;
	 
	 
	 
	 
}	

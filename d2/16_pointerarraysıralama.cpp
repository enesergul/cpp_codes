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
    for (j = 0; j < n-i-1; j++)
        if (arr[j] < arr[j+1])
            swap(&arr[j], &arr[j+1]);}

int function (int *a ,int boyut){
	int eb=a[0];
	int ek=a[0];
	for(int i=0;i<boyut;i++){
		if(a[i]>eb){
			eb=a[i];			
		}
		if(a[i]<ek){
			ek=a[i];			
		}
		
	}
	return eb-ek;
}

int main(){

int a[8]={1,2,3,4,6,7,8,9};
cout << function(a,8)<<endl;
 	  
}	

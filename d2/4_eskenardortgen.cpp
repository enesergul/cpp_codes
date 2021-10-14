#include <iostream>
using namespace std;
//yapamadým
int main(){
	int i,k,b;
	cout << " boyut gir";
    cin>>b;
    
    
	for(i=0;i<=b;i++){

	cout << "\n";
		for (k=0;k<=b;k++){
			if(2*i+k>b)cout << "*";
		
			else cout<<" ";
	
			
		}	
		
		
	}	
	
}

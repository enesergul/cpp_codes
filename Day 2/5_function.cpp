#include <iostream>
using namespace std;




int function(){
	float result;
		int i,n,r;
	

	
	
	return result;
}

int faktoriyel(int n){
	int i,c;
	c=1;
	for(i=1;i<=n;i++){
		c=c*i;
		
	}
	return c;
}

int main(){
	int i,n,r,result;
	cout << " iki sayi gir" <<endl;
    cin>>n;
    cin>>r;
    
    
    
 result=faktoriyel(n)/((faktoriyel(r))*faktoriyel(n-r));
 
 cout << result;
    
   
    
    
	
}

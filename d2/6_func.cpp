#include <iostream>
using namespace std;
int mersennenumber (int n);
int ikininkuvveti(int n);
int faktoriyel(int n);

 mersennenumber (int n){
	int c;	
	for(int i=0;i<=n;i++){
		 c=ikininkuvveti(i)-1;	
		
	}

	return c;
}

 faktoriyel(int n){
	int i,c;
	c=1;
	for(i=1;i<=n;i++){
		c=c*i;
		
	}
	return c;
}

 ikininkuvveti(int n){
	int result=1;
	for(int i=0;i<n;i++){
		result*=2;
	}
	return result;
}

int main(){
	int i,n,r,result,a,b;
	cout << " iki sayi gir" <<endl;
    cin>>n;
    cin>>r;
    
    
    
 result=faktoriyel(n)/((faktoriyel(r))*faktoriyel(n-r));
 	
 cout << result << endl;
    
   a=ikininkuvveti(n);
   
cout << "2nin kuvveti : "<<  a << "\n \n";
for(i=0;i<=n;i++){
	b=mersennenumber(i);
	cout << "mersannenumbers : "<< b << "\n";  
}
 
	
}

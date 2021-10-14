#include <iostream>
using namespace std;
int mersennenumber (int n);
int ikininkuvveti(int n);
int faktoriyel(int n);
bool asalmi(int n);

 mersennenumber (int n){
	int c;	
	for(int i=0;i<=n;i++){
		 c=ikininkuvveti(i)-1;	
		
	}

	return c;
}
bool asalmi(int n){
	for(int i=2;i<n ;i++){
		if(n%i==0){
			return false;
		}
		
	}
	return true;
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
	int i,n,r,result,b,a;
	cout << " iki sayi gir" <<endl;
	
    cin>>n;
    int x[n];
    cin>>r;
    
    
    
 result=faktoriyel(n)/((faktoriyel(r))*faktoriyel(n-r));
 	
 cout << result << endl;
    
   a=ikininkuvveti(n);
   
cout << "2nin kuvveti : "<<  a << "\n \n";

for(i=0;i<=n;i++){
	b=mersennenumber(i);
	cout << "mersannenumbers : "<< b << "\n";  
	
}

if(asalmi(21)==true) cout << "21 asaldır.";
else if(asalmi(13)==true) cout << "13 asaldır.";


for(i=0;i<=n;i++){
		b=mersennenumber(i);
	if(asalmi(mersennenumber(i))==true)cout << "asal mersennenuber : "<< b << "\n";  
	else cout<< "degildirrrrrrr" << endl;
	
}
 
 	
 	 		
 }
	


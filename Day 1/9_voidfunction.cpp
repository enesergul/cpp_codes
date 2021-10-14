//orneksoru 15.
#include <iostream>
using namespace std;



int main ()
{
 int x;
 cout << "aldiðiniz notu giriniz" << endl;	
 cin >> x;
 
 cout << "Not:";	
 if(x>0 &&x<=50){
 	cout << "  F";
 }
 else if(x>50 && x<=70){
 	cout << "  C";
 }
 
else  if(x>70 && x<=90){
 	cout << "  B";
 }
 
 else  if( x>90 && x<=100){
 	cout << "  A";
 }
 else{
 	
 	cout << "NOTUNUZ YANLIS";
 }
 
 
  return 0;
}

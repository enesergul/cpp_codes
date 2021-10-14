//orneksoru 15.
#include <iostream>
using namespace std;



int main ()
{
 int a,b,c;
 cout << "3 sayi giriniz" << endl;	
 cin >> a >> b >> c;
 



if(a>b && a>c){
	
	cout << "en buyuk sayi a dir." << endl;
}

else if(b>a && b>c){
	
	cout << "en buyuk sayi b dir." << endl;
}

else{
	
	cout << "en buyuk sayi c dir." << endl;
}
 
  return 0;
}

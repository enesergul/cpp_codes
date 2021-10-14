
#include <iostream>
using namespace std;



int main ()
{
int i;
	cout << "1 ile 100 arasi tek sayilar"<< endl;
for(i=1;i<=100;i++){
	
	if(i%2==1){
		cout << i << endl;
	}

}	
	cout << "50 ile 70 arasi cift sayilar"<< endl; 
for(i=50;i<=70;i++){

	if(i%2==0){
		cout << i << endl;
	}	

}	 
 cout << "100 ile 70 arasi 7ye bolunebilen sayilar"<< endl;
 for(i=100;i>=70;i--){
	if(i%7==0){
		cout << i << endl;
	}
}	 
 cout << "1 ile 100 arasi hem 3 e hem 7ye bolunebilen sayilar"<< endl;
 for(i=1;i<=100;i++){
	if(i%3==0 && i%7==0){
		cout << i << endl;
	}
}	 
 
  return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;
//exception handling


 class istisna :public std :: exception {
 	public : char *hata(){
 		return "bir hata olustu";
	 }
 };
 
 
 class deneme{
 	public : int f(int x){
 		if(x==0){
 			throw istisna();
		 }
	 }
 };
 
 
 int main(){
 deneme d;
 
 
 cout << " sonuc : " <<d.f(0);
 	
 	
 }

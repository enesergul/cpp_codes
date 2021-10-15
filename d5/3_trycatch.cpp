#include <iostream>
#include <cstdlib>
using namespace std;
//exception handling


 class istisna :public   exception {
 	public : char *hata(){
 		return "bir hata olustu";
	 }
 };
 
  class yenihata :public   exception {
 	public : char *hata(){
 		return " bes verilince olan hata0";
	 }
 };
 
 
 class deneme{
 	public : int f(int x){
 		if(x==0){
 			throw istisna();
		 }
		 
		if(x==5){
			throw yenihata();
		} 
	 }
 };
 
 
 int main(){
 deneme d;
 
try{

		d.f(5); // 0 verince baþka hata
}

 /*catch (istisna i){
	cout << i.hata()<<endl;
}catch (yenihata y){
	cout << y.hata()<<endl; */
 	
 	
 	catch (exception e){
	cout << "genel bir hata olustu"<<endl;
 	
 }}

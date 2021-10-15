#include <iostream>
#include <stdlib.h>
//// Yap�lan en karma��k �rnek bu
//�ncelikle inteherance kavram�n� kullan�ld� protected den veri �ekildi.
//sonra super constructor kullan�ld�   ####  ucgen(int a,int b):sekil(a,b){}  ###### bu kullan�m ile sekili ba�ka yerde tan�mlay�p direk i�ine girdik
// sonra pointer ile fonksiyondan veri �ekerken fonksiyonun i�ine girip return de verilen de�eri g�rd�k.
// e�er kullan�lan ortak fonksiyona "virtual" eklersen pointer ile kulland���nda return d�nmez direk ger�ek sonucu yazd�rabilirsin
// hi�bir �ey de�i�tirmedi�imiz halde yine fonksiyona girersek returndeki say� d�ner. Fakat pointer kullan�nca d�nmez

using namespace std;


class sekil{
	
protected:
	 int en;
	 int boy;
	 int h;
	 
	 
public:
void setEn(int en){
	 	this->en=en;	 	
	 }
void setBoy(int boy){
	 	this->boy=boy;	 	
	 }
void setH(int h){
	 this->h=h;	 	
	 }		 	 

int getEn(){
	return en;
}
int getBoy(){
	return boy;
}
int getH(){
	return h;
}

 virtual int hacim(){
	
	return 0;
}

 sekil(int a,int b,int c){
	en=a;
	boy=b;
	h=c;
	
}

};	


class dikdortgen : public sekil{
	

	public: int hacim(){
		
		
		return en*boy*h;
		
		
	}
	
		dikdortgen(int a,int b,int c):sekil(a,b,c){	}
	
};

class kure : public sekil{
	public: int hacim(){
		return en*en*en*(4/3)*3.14;
		
		
	}
	
	kure(int a,int b,int c):sekil(a,b,c){	}
	
};



	int main(){
		
		dikdortgen d1(3,3,3);
		
		cout << "Dikdortgen prizma hacim : " << d1.hacim()<< endl;
		
		
		kure k1(3,3,3);
		
         cout << "Kure hacim : " << k1.hacim()<< endl;
         
         
        
         
         k1.setEn(6);
         k1.setBoy(6);
         k1.setH(6);
         
         cout << "Kure hacim : " << k1.hacim()<< endl;
         
        d1.setEn(6);
        d1.setBoy(6);
        d1.setH(6);
         
         cout << "Dikdortgen prizma hacim : " << d1.hacim()<< endl;
         
         
         
          sekil *p;
         p=&d1;
         
         sekil *q;
         q=&k1;
        
		cout << "pointer : " << q->hacim()  << endl;
        cout << "pointer : " << p->hacim()  << endl;
       
         
		
	}

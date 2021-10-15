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
		int boy;
		int en;
	public:
void setBoy(int boy){
		this->boy=boy;
		
	}	
	
void setEn(int en){
		this->en=en;	
	}	
	
int getBoy( ){
	return boy;	}
	
int getEn( ){
	return en;	}
	
	
int alan(){
	cout<< " sekilden alan"<<endl;
	
	return 1;
}	

sekil(int a,int b){
		boy=b;
		en=a;
		
	}
		
	};
	
class dikdortgen : public sekil{
	
	public:int alan(){
			cout<< " dikdortgenden alan"<<endl;
		    return en*boy;
	}  
	
	dikdortgen(int a,int b):sekil( a, b){}
	
};
	
class ucgen : public sekil{
		public:int alan(){
				cout<< " ucgenden alan"<<endl;
		        return en*boy/2;
	}
	ucgen(int a,int b):sekil(a,b){}
};	
	int main(){
		
	dikdortgen d1(50,100);
	d1.alan();
	cout << d1.alan();

	ucgen u1(50,100);
	cout << u1.alan();
	
	sekil *s;
	s=&d1;
	
	sekil *p;
	p=&u1;
	
	cout<< "pointer ile ; " << s->alan();
	
	sekil a(21,22);
	
	cout <<" direk sekilden cagirma : " << a.alan() << endl;
	
	d1.setEn(2);
    d1.setBoy(2);
     
         
         cout << "\nDikdortgen  alan : " << d1.alan()<< endl;	
		
		u1.setEn(2);
        u1.setBoy(2);
     
         
         cout << "\nucgen  alan : " << u1.alan()<< endl;		
		
	}

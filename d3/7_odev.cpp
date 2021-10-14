#include <iostream>
using namespace std;

class dortgen {// sýnýf
	public:
		int en;
		int boy;
	    int alan(){	    	
	    	return en*boy;	       	
		}
		
		int cevre(){	    	
	    	return 2*en+2*boy;
		}
		
	
};


class yemek{
public :
float kalori;
int fiyat;
int gram;
int isitmak(int sure){
	if(sure < 300)
	kalori+=sure;
	else kalori=0;
}
	
};

class insan{
	public:
		int boy;
		float kilo;
		int yas;
		int yemek( yemek y){
			kilo+=(y.kalori)/7000;
		}
	
};


int main(){


/*
dortgen bir; // nesne
dortgen iki;



bir.boy=100;
bir.en=50;
bir.alan();
bir.cevre();

iki.en=150;
iki.boy=200;
iki.alan();
iki.cevre();
 */
 yemek sandivic;
sandivic.kalori=233;
sandivic.fiyat=10;
sandivic.gram=100;  

insan ali;
ali.boy=190;
ali.kilo=70;
ali.yas=20;

/*
cout << "birinci dortgenin cevresi =" << bir.cevre() <<endl;
cout << "birinci dortgenin alani =" << bir.alan() <<endl << "\n";



cout << "birinci dortgenin cevresi =" << iki.cevre() <<endl;
cout << "birinci dortgenin alani =" << iki.alan() <<endl;
*/



cout << "ali boy :" << ali.boy <<"kilo :" << ali.kilo << " yas :" << ali.yas <<endl;
	
ali.yemek(sandivic);
cout << "ali boy :" << ali.boy <<"kilo :" << ali.kilo << " yas :" << ali.yas <<endl;

	

sandivic.isitmak(200);


ali.yemek(sandivic);
cout << "ali boy :" << ali.boy <<"kilo :" << ali.kilo << " yas :" << ali.yas <<endl;
	
	
sandivic.isitmak(500);


ali.yemek(sandivic);
cout << "ali boy :" << ali.boy <<"kilo :" << ali.kilo << " yas :" << ali.yas <<endl;
		
}

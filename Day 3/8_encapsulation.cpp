#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class dortgen {// sýnýf
	private:
		int en;
		int boy;
	    int alan(){	    	
	    	return en*boy;	       	
		}
		
		int cevre(){	    	
	    	return 2*en+2*boy;
		}
		//degistirme kodlarý #######################################################
		public:
		int getBoy(){
			return boy;
		}
		void setBoy(int b){
			boy=b;
		}
		
		int getEn(){
			return en;
		}
		void setEn(int x){
			en=x;
		}
	
};



int main (){
 dortgen a;
 a.setBoy(14450);
 a.setEn(450);
 cout <<"Boy : "<< a.getBoy() << "  En : " << a.getEn() <<endl;
 
	
}

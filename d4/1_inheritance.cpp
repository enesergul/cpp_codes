#include <iostream>

using namespace std;

class insan{
	protected:
		int boy;
		int kilo;
		char *adres;
		int yemek(){
			kilo++;
		}
	
};

class calisan : public insan {
	public:
		int maas;
	 int zam (int x){
	 	maas+=x;
	 }
};

int main(void){

	
calisan veli;
veli.maas=5000;
//veli.boy=170;

cout << " veli maas "<<veli.maas ;
	
}

#include <iostream>

using namespace std;

class insan{
	private:
		int boy;
		int kilo;
	public:
	insan(){ // constructor yapýsý boþken aliyi tanýmladý.
		boy=10;
		kilo=1;
		
	}
	insan (int b){
		boy=b;		
	}
	insan (int b,int k){
		boy=b;
		kilo=k;
		
	}
	
	void setBoy(int b){
		boy=b;
	}	
	
	int getBoy(){
		return boy;
	}
	
	int getKilo(){
		return kilo;
	}
};

int main(void){
	insan ali;
	insan veli(170,70);
	cout << "alinin verileri :"<< ali.getBoy()<< " kilo :"<< ali.getKilo()<< "\nvelinin boyu : " << veli.getBoy()<< " kilo :"<<veli.getKilo()<<endl;
	return 0;
	
}



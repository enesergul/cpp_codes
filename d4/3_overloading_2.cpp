#include <iostream>

using namespace std;

class dikdortgen{
	private:
		int boy;
		int en;
	public:
		void setBoy(int boy){
		if(boy<0)	this->boy=0;
	    else		this->boy=boy; //bu ojenin pointeri this
		
			
		}
		void setEn(int en){
		this->en=en;		
		}
	
	int getBoy(){
		return boy;
	}
	int getEn(){
		
		return en;
	}

dikdortgen operator + (const dikdortgen& d){
	
	dikdortgen DDortgen;
	DDortgen.boy=this->boy+d.boy;
	 DDortgen.en=this->en+d.en;
	 return DDortgen;
}
	
	
};


int main(void){
dikdortgen d;
d.setBoy(180);
d.setEn(80);
dikdortgen x;
x.setBoy(150);
x.setEn(50);





dikdortgen toplam=x+d;

cout << " d getboy: " << d.getBoy() << "   d getEn : " << d.getEn() <<endl;	
cout << " x getboy: " << x.getBoy() << "   x getEn : " << x.getEn() <<endl;

cout << "  toplam : " << toplam.getBoy() << "   toplam  : " << toplam.getEn() <<endl;	

}

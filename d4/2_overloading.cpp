#include <iostream>

using namespace std;

class insan{
	private:
		int boy;
		int kilo;
	public:
		void setBoy(int x){
			boy=x;
		}
		void setBoy(float x){
		//k�s�rl� say�lar i�in fonkisyonun tipi ayn� olmal� fakat hangisini se�mesi i�in
		// girilen de�erin tipi farkl� olmal�.
		boy=x*100;		
		}
		void setBoy(int x,int y){
			boy=x;
			kilo=y;
		}
	int getBoy(){
		return boy;
	}
	

	
	
};


int main(void){
insan ali;
ali.setBoy(180);
float b=1.85;
ali.setBoy(b);

ali.setBoy(150,30);

cout << ali.getBoy();
return 0;
	

}

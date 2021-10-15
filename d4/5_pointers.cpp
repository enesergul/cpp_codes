#include <iostream>

using namespace std;

class insan{
	public:
		int boy;
		int kilo;


void yemek(int kilo){
	this->kilo=this->kilo+kilo;
	
}
		
	};
	
	
	int main(){
	
		insan ali;
		ali.boy=180;
		insan *g;
		g=&ali;
		
		cout<< " alinin  boyu :" << ali.boy<<endl;
		
		cout<< " alinin  pointerli boyu :" <<g->boy  <<endl;
	g->kilo=50;
cout <<" kilo : " << g->kilo;
		
g->yemek(7);

cout <<" kilo : " << g->kilo << endl;
		
	}

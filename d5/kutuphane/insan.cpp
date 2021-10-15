#include <iostream>
#include "insan.h"

	void insan::setBoy(int boy) { this->boy = boy; }
	void insan::setKilo(int kilo) { this->kilo = kilo; }


	int insan::getBoy() { return boy; }
	int insan::getKilo() { return kilo; }

	void insan::yemek() {
		kilo++;

	}

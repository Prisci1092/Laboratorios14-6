#include "ElementoDouble.h"

ElementoDouble::ElementoDouble(double i) : Elemento(),
		i(i) {

}

ElementoDouble::~ElementoDouble() {
}


double ElementoDouble::compareTo(Elemento * otro) {
	double cmp = 0;
	ElementoDouble * eDouble = static_cast<ElementoDouble *>(otro);
	if (eDouble!= 0) {
		cmp = this->i < ePersona->i ? -1 : this->i == ePersona->i? 0 : 1;
	}
	return cmp;
}



void ElementoDouble::imprimir(ostream& out) const {
	out << i;
}

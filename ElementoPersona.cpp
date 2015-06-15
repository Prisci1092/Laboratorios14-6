#include "ElementoPersona.h"

ElementoPersona::ElementoPersona(int id,string n)
{
	iD = id;
	name = n;
}

ElementoPersona::~ElementoPersona() {
}

int ElementoPersona::compareTo(Elemento * otro) {
	int cmp = 0;
	ElementoPersona * ePersona = static_cast<ElementoPersona *>(otro);
	if (ePersona!= 0) {
		cmp = this->iD < ePersona->iD ? -1 : this->iD == ePersona->iD ? 0 : 1;
	}
	return cmp;
}

void ElementoPersona::imprimir(ostream& out) const {
	out << name << iD ;
}

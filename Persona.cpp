#include "Persona.h"

Persona::Persona(int id, string n)
{
    iD = id;
    name = n;
}

Persona::~Persona()
{

}

double ElementoDouble::compareTo(Elemento * otro) {
	double cmp = 0;
	ElementoDouble * eDouble = static_cast<ElementoDouble *>(otro);
	if (eDouble!= 0) {
		cmp = this->i < eDouble->i ? -1 : this->i == eDouble->i ? 0 : 1;
	}
	return cmp;
}

#ifndef ELEMENTODOUBLE_H
#define ELEMENTODOUBLE_H


#include "Elemento.h"

using namespace std;

class ElementoDouble : public Elemento {

protected:
	double i;

public:
	ElementoDouble(double i);
	virtual ~ElementoDouble();
	virtual double compareTo(Elemento *);
	virtual void imprimir(ostream &) const;


};

#endif // ELEMENTODOUBLE_H

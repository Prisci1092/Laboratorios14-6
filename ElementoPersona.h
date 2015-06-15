#ifndef ELEMENTOPERSONA_H
#define ELEMENTOPERSONA_H

#include "Elemento.h"


using namespace std;

class ElementoPersona : public Elemento {

protected:
	int iD;
	string name;

public:
	ElementoPersona(int id,string n);
	virtual ~ElementoPersona();
	virtual int compareTo(Elemento *);
	virtual void imprimir(ostream &) const;


};

#endif // ELEMENTODOUBLE_H

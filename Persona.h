#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Persona();
	int iD;
	string name;

public:

	virtual ~Persona(int n ,string id );
	virtual double compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;


};

#endif // ELEMENTO_H


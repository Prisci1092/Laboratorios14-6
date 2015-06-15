
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int) time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoDouble(rand() % 100));
	}

	cout << a << endl;

	system("pause");
	return 0;
}

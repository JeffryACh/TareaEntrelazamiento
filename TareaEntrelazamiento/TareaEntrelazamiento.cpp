/*
* @author Jeffry Araya y David Salazar
* 
* @dateCreated 04/03/2025 19:20
* 
* @lastModified 06/03/2025 13:35
*/

#include <iostream>
#include "ListaSimple.h"
using namespace std;


int main()
{
    lista l1;
    l1.InsertarInicio(1);
    l1.InsertarInicio(2);
	l1.InsertarInicio(3);
	l1.InsertarFinal(4);
	l1.InsertarPos(5, 3);
    l1.InsertarInicio(6);
	l1.Mostrar();
    lista l2;
    l2.InsertarInicio(7);
    l2.InsertarFinal(8);
    l2.InsertarInicio(9);
    l2.InsertarFinal(10);
    l2.InsertarInicio(11);
    l2.InsertarFinal(12);
    l2.Mostrar();
    cout << "El largo de la lista 1 es: " << l1.largoLista() << endl;
    cout << l1.largoCorrecto(l1) << endl;
	cout << "El largo de la lista 2 es: " << l2.largoLista() << endl;
	cout << l2.largoCorrecto(l2) << endl;
    //lista l3;
    // l3.Entrelazar(l1, l2);
	return 0;
}
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
    
    lista l1, l2, l3;

    /*
    l1.InsertarInicio(1);
    l1.InsertarInicio(2);
    l1.InsertarInicio(3);
    l1.InsertarFinal(4);
    l1.InsertarPos(5, 3);
    l1.InsertarInicio(6);
    l1.Mostrar();

    l2.InsertarInicio(7);
    l2.InsertarFinal(8);
    l2.InsertarInicio(9);
    l2.InsertarFinal(10);
    l2.InsertarInicio(11);
    l2.InsertarFinal(12);
    l2.InsertarFinal(-12);
    l2.Mostrar();

    cout << "El largo de la lista 1 es: " << l1.LargoLista() << endl;
    cout << l1.LargoCorrecto() << endl;
    cout << "El largo de la lista 2 es: " << l2.LargoLista() << endl;
    cout << l2.LargoCorrecto() << endl;
    l1.Mostrar();
    l2.Mostrar();
    cout << "los elementos de la lista1 internamente son diferentes: " << l1.ElementosDiferentes() << endl;
    cout << "los elementos de la lista2 internamente son diferentes: " << l2.ElementosDiferentes() << endl;
    l1.Mostrar();
    l2.Mostrar();
    cout << "los elementos de la lista2 son diferentes a la lista 1: " << l2.ElementosDiferentesEnLista(l1) << endl;
	cout << "los elementos de la lista1 son diferentes a la lista 2: " << l1.ElementosDiferentesEnLista(l2) << endl;
    l2.Mostrar();
    l1.Mostrar();

    cout << "Los elementos de la lista1 son positivos: " << l2.ListaPositiva() << endl;
    cout << "Los elementos de la lista1 son positivos: " << l1.ListaPositiva() << endl;

    cout << "Borrando las pruebas de Restricciones: " << endl;
    l1.BorrarLista();
    l2.BorrarLista();
    l1.Mostrar();
    l2.Mostrar();
    */

    //Prueba 1: Listas no coinciden en número de elementos.
    cout << "---------------------------------" << endl;

    l1.InsertarInicio(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(3);
    l1.InsertarFinal(12);
    l1.InsertarFinal(23);
    l1.InsertarFinal(56);

    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    cout << "Prueba 1: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1,l2);

    l1.Mostrar();
    l2.Mostrar();

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 2: Listas con numeros iguales dentro de su propia lista.
    cout << "---------------------------------" << endl;
    l1.InsertarInicio(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(3);
    l1.InsertarFinal(12);
    l1.InsertarFinal(23);
    l1.InsertarFinal(56);

    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);
    l2.InsertarInicio(7);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    cout << "Prueba 2: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);

    l1.Mostrar();
    l2.Mostrar();

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 3: Listas con numeros negativos.
    l1.InsertarInicio(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(3);
    l1.InsertarFinal(12);
    l1.InsertarFinal(23);
    l1.InsertarFinal(-56);

    l2.InsertarInicio(8);
    l2.InsertarInicio(9);
    l2.InsertarInicio(-2);
    l2.InsertarInicio(13);
    l2.InsertarInicio(32);
    l2.InsertarInicio(1);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    cout << "Prueba 3: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 4: Listas con numeros que se repiten en listas distintas.
    l1.InsertarInicio(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(3);
    l1.InsertarFinal(12);
    l1.InsertarFinal(23);
    l1.InsertarFinal(1);

    l2.InsertarInicio(8);
    l2.InsertarInicio(9);
    l2.InsertarInicio(2);
    l2.InsertarInicio(13);
    l2.InsertarInicio(32);
    l2.InsertarInicio(1);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    cout << "Prueba 4: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);

    l1.BorrarLista();
    l2.BorrarLista();

    //Prueba 5: Prueba con 6 elementos.
    l1.InsertarInicio(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(3);
    l1.InsertarFinal(12);
    l1.InsertarFinal(23);
    l1.InsertarFinal(56);

    l2.InsertarInicio(8);
    l2.InsertarFinal(9);
    l2.InsertarFinal(2);
    l2.InsertarFinal(13);
    l2.InsertarFinal(32);
    l2.InsertarFinal(1);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    cout << "Prueba 5: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 6: Prueba con listas de cantidad distinta de elementos.
    l1.InsertarInicio(1);
    l1.InsertarFinal(2);
    l1.InsertarFinal(3);
    l1.InsertarFinal(4);
    l1.InsertarFinal(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(7);
    l1.InsertarFinal(8);
    l1.InsertarFinal(9);
    l1.InsertarFinal(10);
    l1.InsertarFinal(11);
    l1.InsertarFinal(12);
    l1.InsertarFinal(19);
    l1.InsertarFinal(20);
    l1.InsertarFinal(21);
    l1.InsertarFinal(22);
    l1.InsertarFinal(23);
    l1.InsertarFinal(24);


    l2.InsertarInicio(13);
    l2.InsertarFinal(14);
    l2.InsertarFinal(15);
    l2.InsertarFinal(16);
    l2.InsertarFinal(17);
    l2.InsertarFinal(18);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    l1.BorrarLista();
    l2.BorrarLista();

    cout << "Prueba 6: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);
    cout << endl;

    //Prueba 7: Listas Vacias.
    l1.InsertarInicio(1);
    l1.InsertarFinal(2);
    l1.InsertarFinal(3);
    l1.InsertarFinal(4);
    l1.InsertarFinal(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(7);
    l1.InsertarFinal(8);
    l1.InsertarFinal(9);
    l1.InsertarFinal(10);
    l1.InsertarFinal(11);
    l1.InsertarFinal(12);


    l2.InsertarInicio(13);
    l2.InsertarFinal(14);
    l2.InsertarFinal(15);
    l2.InsertarFinal(16);
    l2.InsertarFinal(17);
    l2.InsertarFinal(18);
    l2.InsertarFinal(19);
    l2.InsertarFinal(20);
    l2.InsertarFinal(21);
    l2.InsertarFinal(22);
    l2.InsertarFinal(23);
    l2.InsertarFinal(24);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    l1.BorrarLista();
    l2.BorrarLista();

    cout << "Prueba 7: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);
    cout << endl;

    //Prueba 8: Listas de mas elementos.
    l1.InsertarInicio(1);
    l1.InsertarFinal(2);
    l1.InsertarFinal(3);
    l1.InsertarFinal(4);
    l1.InsertarFinal(5);
    l1.InsertarFinal(6);
    l1.InsertarFinal(7);
    l1.InsertarFinal(8);
    l1.InsertarFinal(9);
    l1.InsertarFinal(10);
    l1.InsertarFinal(11);
    l1.InsertarFinal(12);


    l2.InsertarInicio(13);
    l2.InsertarFinal(14);
    l2.InsertarFinal(15);
    l2.InsertarFinal(16);
    l2.InsertarFinal(17);
    l2.InsertarFinal(18);
    l2.InsertarFinal(19);
    l2.InsertarFinal(20);
    l2.InsertarFinal(21);
    l2.InsertarFinal(22);
    l2.InsertarFinal(23);
    l2.InsertarFinal(24);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();

    l1.BorrarLista();
    l2.BorrarLista();

    cout << "Prueba 8: Entrelazamiento de listas: " << endl;
    l3.Entrelazar(l1, l2);
    cout << endl;

	return 1;
}
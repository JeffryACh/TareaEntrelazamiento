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

    //Prueba 1: Listas no coinciden en número de elementos.
    cout << "---------------------------------" << endl;
    cout << "Prueba 1: Listas no coinciden en numero de elementos." << endl;
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
    //l3.Entrelazar(l1,l2);
    l1.Entrelazar(l2);

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 2: Listas con numeros iguales dentro de su propia lista.
    cout << "---------------------------------" << endl;
    cout << "Prueba 2: Listas con numeros iguales dentro de su propia lista." << endl;
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
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 3: Listas con numeros negativos.
    cout << "---------------------------------" << endl;
    cout << "Prueba 3: Listas con numeros negativos." << endl;
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
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 4: Listas con numeros que se repiten en listas distintas.
    cout << "---------------------------------" << endl;
    cout << "Prueba 4: Listas con numeros que se repiten en listas distintas." << endl;
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
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);

    l1.BorrarLista();
    l2.BorrarLista();
    cout << endl;

    //Prueba 5: Prueba con 6 elementos.
    cout << "---------------------------------" << endl;
    cout << "Prueba 5: Prueba con 6 elementos." << endl;
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
    l1.Entrelazar(l2);
    //l3.Entrelazar(l1, l2);

    //l1.BorrarLista();
    //l2.BorrarLista();
    cout << endl;

    //Prueba 6: Prueba con listas de cantidad distinta de elementos.
    cout << "---------------------------------" << endl;
    cout << "Prueba 6: Prueba con listas de cantidad distinta de elementos." << endl;
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

    cout << "Prueba 6: Entrelazamiento de listas: " << endl;
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);
    cout << endl;

    //Prueba 7: Listas Vacias.
    cout << "---------------------------------" << endl;
    cout << "Prueba 7: Listas Vacias." << endl;

    l1.BorrarLista();


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

    cout << "Prueba 7: Entrelazamiento de listas: " << endl;
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);
    l2.BorrarLista();

    cout << endl;
    
    
    //Prueba 8: Listas de mas de 6 elementos.
    
    cout << "---------------------------------" << endl;
    cout << "Prueba 8: Listas de mas elementos." << endl;
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


    cout << "Prueba 8: Entrelazamiento de listas: " << endl;
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);
    //l1.BorrarLista();
    //l2.BorrarLista();
    cout << endl;

    //Prueba 9: Listas de mas de 12 elementos.

    cout << "---------------------------------" << endl;
    cout << "Prueba 9: Listas de mas elementos." << endl;
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
    l1.InsertarInicio(13);
    l1.InsertarFinal(14);
    l1.InsertarFinal(15);
    l1.InsertarFinal(16);
    l1.InsertarFinal(17);
    l1.InsertarFinal(18);

    l2.InsertarFinal(19);
    l2.InsertarFinal(20);
    l2.InsertarFinal(21);
    l2.InsertarFinal(22);
    l2.InsertarFinal(23);
    l2.InsertarFinal(24);
    l2.InsertarInicio(25);
    l2.InsertarFinal(26);
    l2.InsertarFinal(27);
    l2.InsertarFinal(28);
    l2.InsertarFinal(29);
    l2.InsertarFinal(30);
    l2.InsertarFinal(31);
    l2.InsertarFinal(32);
    l2.InsertarFinal(33);
    l2.InsertarFinal(34);
    l2.InsertarFinal(35);
    l2.InsertarFinal(36);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();


    cout << "Prueba 9: Entrelazamiento de listas: " << endl;
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);
    //l1.BorrarLista();
    //l2.BorrarLista();
    cout << endl;

    // Prueba 10: Listas de 24 elementos.
    cout << "---------------------------------" << endl;
    cout << "Prueba 10: Listas de 24 elementos." << endl;

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
    l1.InsertarInicio(13);
    l1.InsertarFinal(14);
    l1.InsertarFinal(15);
    l1.InsertarFinal(16);
    l1.InsertarFinal(17);
    l1.InsertarFinal(18);
    l1.InsertarFinal(19);
    l1.InsertarFinal(20);
    l1.InsertarFinal(21);
    l1.InsertarFinal(22);
    l1.InsertarFinal(23);
    l1.InsertarFinal(24);
    
    l2.InsertarInicio(25);
    l2.InsertarFinal(26);
    l2.InsertarFinal(27);
    l2.InsertarFinal(28);
    l2.InsertarFinal(29);
    l2.InsertarFinal(30);
    l2.InsertarFinal(31);
    l2.InsertarFinal(32);
    l2.InsertarFinal(33);
    l2.InsertarFinal(34);
    l2.InsertarFinal(35);
    l2.InsertarFinal(36);
    l2.InsertarFinal(37);
    l2.InsertarFinal(38);
    l2.InsertarFinal(39);
    l2.InsertarFinal(40);
    l2.InsertarFinal(41);
    l2.InsertarFinal(42);
    l2.InsertarFinal(43);
    l2.InsertarFinal(44);
    l2.InsertarFinal(45);
    l2.InsertarFinal(46);
    l2.InsertarFinal(47);
    l2.InsertarFinal(48);

    cout << "Restableciendo listas: " << endl;
    l1.Mostrar();
    l2.Mostrar();


    cout << "Prueba 10: Entrelazamiento de listas: " << endl;
    //l3.Entrelazar(l1, l2);
    l1.Entrelazar(l2);
    cout << endl;

	return 1;
    
}
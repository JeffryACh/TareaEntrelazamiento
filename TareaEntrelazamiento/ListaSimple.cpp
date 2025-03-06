/*
* @Author Jeffry Araya y David Salazar
* 
* @dateCreated 06/03/2025 13:50
* 
* @lastModified 
*/

#include <iostream>
using namespace std;

#include "ListaSimple.h"

/*
* Destructor, destruye la lista
*
* @Param none
*
* @Return none
*
*/
lista::~lista()
{
    nodo* aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

/*
* Largo de la lista, esta funcion retorna el largo de la lista
*
* @Param none
*
* @Return int cont
*/
int lista::largoLista() {
    int cont = 0;

    pnodo aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
        cout << endl;
    }

}

/*
* Insertar al inicio, esta funcion inserta un nodo al inicio de la lista
*
* @Param int v, es el valor del nodo
*
* @Return none
*/
void lista::InsertarInicio(int v)//6
{
    if (ListaVacia())
    {

        primero = new nodo(v);//6

    }
    else
    {
        //primera forma
        // primero=new nodo (v,primero);   

       //segunda forma
        pnodo nuevo = new nodo(v);//1
        nuevo->siguiente = primero;//2
        primero = nuevo;




    }
}

/*
* Insertar al final, esta funcion inserta un nodo al final de la lista
*
* @Param int v, es el valor del nodo
*
* @Return none
*/
void lista::InsertarFinal(int v)//76
{
    if (ListaVacia())
        primero = new nodo(v);
    else
    {
        //primera forma
        pnodo aux = primero; while (aux->siguiente != NULL) aux = aux->siguiente;  aux->siguiente = new nodo(v);

        //segunda forma 
       /* pnodo aux = primero;
         while ( aux->siguiente != NULL)
          aux= aux->siguiente;
         pnodo nuevo=new nodo(v);
         aux->siguiente=nuevo;*/
    }
}

/*
* Insertar en una posicion, esta funcion inserta en una posicion especifica de la lista
*
* @Param int v, es el valor del nodo
*
* @Param int pos, es la posicion del nodo
*
* @Return none
*/
void lista::InsertarPos(int v, int pos)
{
    if (ListaVacia())
        primero = new nodo(v);
    else {
        if (pos <= 1)
        {
            //OPcion1
            pnodo nuevo = new nodo(v);
            nuevo->siguiente = primero;
            primero = nuevo;
            //OPcion 2
            //InsertarInicio(v);
        }
        else {
            nodo* aux = primero;
            int i = 2;
            while ((i != pos) && (aux->siguiente != NULL)) {
                i++;
                aux = aux->siguiente;
            }
            pnodo nuevo = new nodo(v);
            nuevo->siguiente = aux->siguiente;
            aux->siguiente = nuevo;

        }
    }
}

/*
* Borrar al final, esta funcion borra el nodo al final de la lista
*
* @Param none
*
* @Return none
*/
void lista::BorrarFinal()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista:" << endl;

    }
    else {

        if (primero->siguiente == NULL)
        {
            pnodo temp = primero;
            primero = NULL;
            delete temp;;
        }
        else {

            pnodo aux = primero;
            while (aux->siguiente->siguiente != NULL) {
                aux = aux->siguiente;

            }

            pnodo temp = aux->siguiente;
            aux->siguiente = NULL;


            delete temp;
        }
    }
}

/*
* Borrar al inicio, esta funcion borra el nodo al inicio de la lista
*
* @Param none
*
* @Return none
*/
void lista::BorrarInicio()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista:" << endl;

    }
    else {
        if (primero->siguiente == NULL)
        {
            pnodo temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {

            pnodo aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
    }
}

/*
* Borrar en posicion, esta funcion borra el nodo en la posicion indicada
*
* @Param int pos, es la posicion del nodo
*
* @Return none
*/
void lista::borrarPosicion(int pos) {
    if (ListaVacia()) {
        cout << "Lista vacia" << endl;
    }
    else {
        if ((pos > largoLista()) || (pos < 0)) {
            cout << "Error en posicion" << endl;
        }
        else {
            if (pos == 1)
            {
                /*	pnodo temp=primero;
                    primero=primero->siguiente;
                    delete temp;*/
                BorrarInicio();
            }
            else {
                int cont = 2;
                pnodo aux = primero;
                while (cont < pos) {
                    aux = aux->siguiente;
                    cont++;
                }
                pnodo temp = aux->siguiente;
                aux->siguiente = aux->siguiente->siguiente;
                delete temp;
            }
        }
    }

}

/*
* Mostrar, esta funcion muestra la lista en orden via terminal
*
* @Param none
*
* @Return none
*/
void lista::Mostrar()
{
    nodo* aux;
    if (primero == NULL)
        cout << "No hay elementos AQUI";
    else
    {


        aux = primero;
        while (aux)
        {
            cout << aux->valor << "-> ";
            aux = aux->siguiente;
        }
        cout << endl;
    }
}

/*
* Buscar Numero en Lista, esta funcion busca un valor en la lista
*
* @Param int pV, es el valor del nodo
*
* @Param lista pL, es la lista
*
* @Return bool, true si lo encuentra y false si no
*/
bool lista::buscarNumeroEnLista(int pV, lista pL) {
	pnodo aux = pL.primero;
	while (aux != NULL) {
		if (aux->valor == pV) {
			return true;
		}
		aux = aux->siguiente;
	}
	return false;
}

/*
* Largo Correcto, esta funcion verifica si el largo de la lista es correcto
*
* @Param lista pL, es la lista
*
* @Return bool, true si el largo es multiplo de 6, false si no
*/
bool lista::largoCorrecto(lista pL) {
    return (pL.largoLista() % 6) == 0;
}
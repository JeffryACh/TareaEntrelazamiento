/*
* @Author Jeffry Araya y David Salazar
* 
* @dateCreated 06/03/2025 13:50
* 
* @lastModified 
*/

//Librerias y espacios de nombre
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
int lista::LargoLista() {
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
* Elemento valido, esta funcion verifica si el elemento es valido, entero positivo
*
* @Param int pV, es el valor del nodo
* 
* @Return bool, true si es valido y false si no
*/
bool lista::ElementoValido(int pV) {
    return pV >= 0;
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
void lista::BorrarPosicion(int pos) {
    if (ListaVacia()) {
        cout << "Lista vacia" << endl;
    }
    else {
        if ((pos > LargoLista()) || (pos < 0)) {
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
    if (ListaVacia())
        cout << "No hay elementos AQUI" <<endl;
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
bool lista::BuscarNumeroEnLista(int pV, lista pL) {
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
bool lista::LargoCorrecto() {
    return (LargoLista() % 6) == 0;
}

/*
* Elementos Diferentes En Lista, esta funcion verifica si los elementos de las lista son diferentes
*
* @Param lista pL1, es la lista 1
*
* @Param lista pL2, es la lista 2
*
* @Return bool, true si los elementos son diferentes, false si no
*/
bool lista::ElementosDiferentesEnLista(lista &pL1) {
    pnodo aux1 = primero;
    pnodo aux2 = pL1.primero;
    while (aux1 != NULL) {
        while (aux2 != NULL) {
            if (aux1->valor == aux2->valor) {
                return false;
            }
            aux2 = aux2->siguiente;
        }
        aux2 = pL1.primero;
        aux1 = aux1->siguiente;
    }
    return true;
}


/*
* Elementos Diferentes, esta funcion verifica si los elementos de la lista internamente son diferentes
*
* @Param lista pL1, es la lista 1
*
* @Return bool, true si los elementos son diferentes, false si no
*/
bool lista::ElementosDiferentes() {
    pnodo aux1 = primero;
	while (aux1 != NULL) {
		pnodo aux2 = aux1->siguiente;
		while (aux2 != NULL) {
			if (aux1->valor == aux2->valor) {
				return false;
			}
			aux2 = aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
	return true;
}

/*
* Esta funcion verifica si los elementos númericos de la lista son positivos mayores a 0.
*
* @Param lista pL1, es la lista 1
*
* @Return bool, true si los elementos son enteros positivos, false si no
*/
bool lista::ListaPositiva()
{
    pnodo aux1 = primero;
    while (aux1 != NULL) 
    {
        if (!ElementoValido(aux1->valor))
            return false;
        aux1 = aux1->siguiente;
    }
    return true;
}

/*
* Borra todos los elementos de la lista
* 
* @Param lista pL1, es la lista 1
* 
* @Return void, no retorna nada.
*/
void lista::BorrarLista()
{
    if (ListaVacia())
    {
        cout << "No hay elementos en la lista:" << endl;
    }
    else
    {
        int cont = 0;
        int larg = LargoLista();
        while (cont < larg) {
            BorrarInicio();
            cont++;
        }
    }
}


/*Entrelaza 2 listas de dos formas distintas para mostrarlas por pantalla y despues borrar las listas.
* La primer lista muestra todos los elementos de ambas listas.
* La segunda solo muestra algunos elementos.
* Ambas listas deben contener números distintos mayores a 0.
* Ambas listas deben de contener un número de elementos multiplo de 6
* Ambas listas no deben contener elementos negativos ni tampoco repetidos.
* Ambas listas no deben repetir elementos entre sí.
*  
* @Param lista pL1, es la lista1
* 
* @Param lista pL2, es la lista2
* 
* @Return void, no retorna nada.
*/
void lista::Entrelazar(lista& pL1, lista& pL2)
{
    bool check = true;
    if ((pL1.ListaVacia()) || (pL2.ListaVacia())) {
        cout << "Error: Una o ambas listas estan vacias" << endl;
        return;
    }
    else if (pL1.LargoLista() != pL2.LargoLista()) {
        cout << "Error: La cantidad de elementos de una o ambas listas no son iguales" << endl;
        return;
    }
    else if ((!pL1.LargoCorrecto()) || (!pL2.LargoCorrecto())) {
        cout << "Error: Los elementos de una o ambas listas nos son multiplos de 6" << endl;
        return;
    }
    else if ((!pL1.ListaPositiva()) || (!pL2.ListaPositiva())) {
        cout << "Error: Uno o mas elementos dentro de las listas son numeros negativos" << endl;
        return;
    }
    else if (pL1.ElementosDiferentes() || pL2.ElementosDiferentes()) {
        cout << "Error: Una o ambas listas contienen elementos repetidos dentro de si mismas" << endl;
        return;
    }
    else if (pL1.ElementosDiferentesEnLista(pL2)) {
        cout << "Error: Las listas contienen elementos numericos iguales entre si" << endl;
        return;
    }
    else {
        pnodo aux1 = pL1.primero;
        pnodo aux2 = pL2.primero;
        pnodo temp = aux1->siguiente;

        int cont = 1;
        int larg = pL1.LargoLista();

        while (cont < larg - 1) {
            //Primera iteración
            if (cont == 1) {
                temp = aux1->siguiente;
                aux1->siguiente = aux2->siguiente->siguiente;
                aux1 = aux1->siguiente;
            }
            else if (cont % 2 != 0) //Si la iteración es impar
            {
                aux1 = aux1->siguiente;
                temp = aux1->siguiente;
                aux1->siguiente = aux2->siguiente->siguiente;
                aux1 = aux2->siguiente->siguiente;
            }
            else //Si es par
            {
                aux2 = aux2->siguiente;
                aux2->siguiente = temp;

                aux2 = aux1;
                aux1 = temp;
            }
            cont++;
        }
        //Ultima iteración
        aux1 = aux1->siguiente;
        temp = aux1->siguiente;
        aux1->siguiente = pL2.primero;
        aux1 = aux1->siguiente;

        aux2 = aux2->siguiente;
        aux2->siguiente = temp;
        aux2 = temp;

        //Mostrar listas entrelazadas.
        cout << "Lista 1 entrelazada: " << endl;
        pL1.Mostrar();
        cout << "Lista 2 entrelazada: " << endl;
        pL2.Mostrar();

        //Borrar listas para evitar problemas a la hora de eliminar referencias:
        //Eliminar referencia de la lista2
        while (pL2.primero != NULL) {
            pL2.primero = pL2.primero->siguiente;
        }

        //Eliminar todos los nodos de la lista
        pL1.BorrarLista();

        return;
    }
}


void lista::Entrelazar2(lista& pL1)
{
    if ((pL1.ListaVacia()) || (ListaVacia())) {
        cout << "Error: Una o ambas listas estan vacias" << endl;
        return;
    }
    else if (pL1.LargoLista() != LargoLista()) {
        cout << "Error: La cantidad de elementos de una o ambas listas no son iguales" << endl;
        return;
    }
    else if ((!pL1.LargoCorrecto()) || (!LargoCorrecto())) {
        cout << "Error: Los elementos de una o ambas listas nos son multiplos de 6" << endl;
        return;
    }
    else if ((!pL1.ListaPositiva()) || (!ListaPositiva())) {
        cout << "Error: Uno o mas elementos dentro de las listas son numeros negativos" << endl;
        return;
    }
    else if ((!pL1.ElementosDiferentes()) || (!ElementosDiferentes())) {
        cout << "Error: Una o ambas listas contienen elementos repetidos dentro de si mismas" << endl;
        return;
    }
    else if (!ElementosDiferentesEnLista(pL1)) {
        cout << "Error: Las listas contienen elementos numericos iguales entre si" << endl;
        return;
    }
    else {
        pnodo aux1 = primero;
        pnodo aux2 = pL1.primero;
        pnodo temp = aux1->siguiente;

        int cont = 1;
        int larg = LargoLista();

        while (cont < larg - 1)
        {
            //Primera iteración
            if (cont == 1) {
                //temp = aux1->siguiente;
                aux1->siguiente = aux2->siguiente->siguiente;
                aux1 = aux1->siguiente;
            }
            else if (cont % 2 != 0) { //Si la iteración es impar
                aux1 = aux1->siguiente;
                temp = aux1->siguiente;
                aux1->siguiente = aux2->siguiente->siguiente;
                aux1 = aux2->siguiente->siguiente;
            }
            else { //Si es par
                aux2 = aux2->siguiente;
                aux2->siguiente = temp;

                aux2 = aux1;
                aux1 = temp;
            }
            cont++;
        }
        //Ultima iteración
        aux1 = aux1->siguiente;
        temp = aux1->siguiente;
        aux1->siguiente = pL1.primero;
        aux1 = aux1->siguiente;

        aux2 = aux2->siguiente;
        aux2->siguiente = temp;
        aux2 = temp;

        //Mostrar listas entrelazadas.
        cout << "Lista 1 entrelazada: " << endl;
        Mostrar();
        cout << "Lista 2 entrelazada: " << endl;
        pL1.Mostrar();

        //Borrar listas para evitar problemas a la hora de eliminar referencias:
        //Eliminar referencia de la lista2
        while (pL1.primero != NULL)
        {
            pL1.primero = pL1.primero->siguiente;
        }

        //Eliminar todos los nodos de la lista
        BorrarLista();

        return;
    }
}
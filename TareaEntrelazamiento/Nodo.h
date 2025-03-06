/*
* @Author Jeffry Araya y David Salazar
*
* @dateCreated 06/03/2025 13:50
*
* @lastModified
*/

#pragma once

class nodo { // Constructores
public:

    /*
    * Constructor por defecto de la clase nodo, solo recibe un valor
    *
    * @Param int v, es el valor del nodo
    *
    * @Return none
    */
    nodo(int v)//6  nodo(string)  nodo(int x
    {
        valor = v;
        siguiente = NULL;
    }

    /*
    * Constructor de la clase nodo, recibe un valor y un nodo
    *
    * @Param int v, es el valor del nodo
    *
    * @Param pnodo signodo, es el siguiente nodo
    *
    * @Return none
    */
    nodo(int v, nodo* signodo)    // nodo(nodo *signodo,int v)
    {
        valor = v;
        siguiente = signodo;
    }




private:
    int valor;
    nodo* siguiente;// Clase Autoreferencia


    friend class lista;
};

typedef nodo* pnodo; //Alias
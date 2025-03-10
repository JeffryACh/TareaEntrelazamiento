/*
* @Author Jeffry Araya y David Salazar
*
* @dateCreated 06/03/2025 13:50
*
* @lastModified
*/
#pragma once
#include "Nodo.h"
//void no retorna nada
//bool retorna False o True
//int retorna entero
class lista
{
public:
    /*
    * Constructor por defecto de la clase lista
    *
    * @Param none
    *
    * @Return none
    */
    lista() { primero = NULL; }//constructor
    /*
    * Destructor de la clase lista
    *
    * @Param none
    *
    * @Return none
    */
    ~lista();//destructor

    void InsertarInicio(int v);
    void InsertarFinal(int v);
    void InsertarPos(int v, int pos);
    bool ListaVacia() { return primero == NULL; }
    void Mostrar();
    void BorrarFinal();
    void BorrarInicio();
    void BorrarPosicion(int pos);
    int LargoLista();
    bool BuscarNumeroEnLista(int v, lista l1);
    bool LargoCorrecto();
    bool ElementoValido(int v);
    bool ElementosDiferentesEnLista(lista &l1);
    bool ElementosDiferentes();
    bool ListaPositiva();
    void BorrarLista();
    void Entrelazar(lista &pL1, lista &pL2);


private:
    pnodo primero; // Atributo de la clase

};
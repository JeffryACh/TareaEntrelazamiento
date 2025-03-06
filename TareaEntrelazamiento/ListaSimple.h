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

    void InsertarInicio(int v);//No retornan nada
    void InsertarFinal(int v);
    void InsertarPos(int v, int pos);
    bool ListaVacia() { return primero == NULL; } //retorna True o False
    void Mostrar();//imprimir
    void BorrarFinal();
    void BorrarInicio();
    void borrarPosicion(int pos);
    int largoLista();// retorno un valor numerico
    bool buscarNumeroEnLista(int v, lista l1);//retorna True o False
    bool largoCorrecto(lista L1); 
    //void Entrelazar(lista l1, lista l2);


private:
    pnodo primero; // Atributo de la clase

};
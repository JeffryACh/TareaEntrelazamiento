/*
* @author Jeffry Araya y David Salazar
* 
* @dateCreated 04/03/2025 19:20
* 
* @lastModified 
*/

#include <iostream>
using namespace std;

class nodo { // Constructores
public:


    nodo(int v)//6  nodo(string)  nodo(int x
    {
        valor = v;
        siguiente = NULL;
    }

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

//void no retorna nada
//bool retorna False o True
//int retorna entero
class lista
{
public:
    lista() { primero = NULL; }//constructor
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


private:
    pnodo primero;

};

/*
* Destructor
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
* Insertar al final, esta funcion inserta al final de la lista
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
*  Borrar en posicion, esta funcion borra el nodo en la posicion indicada
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

int main()
{
    cout << "Hello World!" << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

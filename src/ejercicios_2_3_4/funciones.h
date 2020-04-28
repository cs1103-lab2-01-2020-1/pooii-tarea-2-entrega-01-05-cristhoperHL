#ifndef FUNCIONES_H
#define FUNCIONES_H

#include"../librerias/tipos.h"

//EJERICIO 2
template <class T>
class LIFO{
private:
    T* arr;
    int tam;
public:
    LIFO();
    int size();
    bool empty();
    T top();
    void push(T element); 
    void pop();
     
};


//EJERCICIO 3



#endif
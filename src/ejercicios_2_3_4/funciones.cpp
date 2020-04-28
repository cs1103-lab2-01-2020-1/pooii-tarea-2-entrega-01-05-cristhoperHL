#ifndef FUNCIONES_CPP
#define FUNCIONES_CPP


#include"funciones.h"


//EJERCICIO 2 y 4
template<class T>
LIFO<T>::LIFO(){
    tam = 0;
}

template<class T>
int LIFO<T>::size(){
    return tam;
}

template<class T>
bool LIFO<T>::empty(){
    if(tam==0){
        return true;
    }
    return false;
}

template<class T>
T LIFO<T>::top(){
    return arr[0];
}


template<class T>
void LIFO<T>::push(T element){
    tam++;
    if(tam>1){

        T* arr2=new T[tam];
        
        for(int i=0;i<tam;i++){
            if(i==0){
                arr2[i]=element;
            }
            else{
                arr2[i]=arr[i-1];
            }
        }
        delete []arr;
        arr=new T[tam];
        for(int i=0;i<tam;i++){
            arr[i]=arr2[i];
        }

        delete []arr2;
    }
    else{
        arr=new T[tam];
        arr[0]=element;
    }
}

template<class T>
void LIFO<T>::pop(){
    tam--;

    T* arr2=new T[tam];

    for(int i=0;i<tam;i++){
        arr2[i]=arr[i+1];
    }
    delete []arr;
    arr=new T[tam];

    for(int i=0;i<tam;i++){
        arr[i]=arr2[i];
    }



}





//EJERCICIO 3


#endif
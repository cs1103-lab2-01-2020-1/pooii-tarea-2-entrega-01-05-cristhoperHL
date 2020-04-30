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
void swap(int &x,int &y);


template <class T>
class List{
private:
    T* arr;
    int tam;
public:
    List();
    List(T arr[],int tam1);
    int get_size();
    void push_back(T element);
    T back();
    T front();
    void pop_front();
    void merge(List l1);
    void sort();
    bool binary_search(int ini,int end,T element);
    int lower_bound(int init,int end,T element);
    void print();
};



#endif
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



void swap(int &x,int& y){
    int tmp=x;
    x=y;
    y=tmp;
}


template <class T>
List<T>::List(){
    tam=0;
}

template <class T>   
List<T>::List(T arr1[],int tam1){
    tam=tam1;
    arr = new T[tam];
    for(int i=0;i<tam;i++){
        arr[i]=arr1[i];
    }
    
}

template<class T>
int List<T>::get_size(){
    return tam;
}

template<class T>
void List<T>::push_back(T element){
    tam++;
    if(tam > 1){
        T *arr2=new T[tam];
        for(int i=0;i<tam;i++){
            if(i==(tam-1)){
                arr2[i] = element;
            }
            else{
                arr2[i] = arr[i]; 
            }
        }

        delete []arr;
        arr = new T[tam];
        for(int i=0;i<tam;i++){
            arr[i]=arr2[i];
        }
        delete []arr2;
    }
    else{
        arr = new T[tam];
        arr[0] = element;
    }

}

template<class T>
void List<T>::pop_front(){
    tam--;

    T *arr2=new T[tam];
    for(int i=0;i<tam;i++){
        arr2[i]=arr[i+1];
    }

    delete []arr;
    arr=new T[tam];
    for(int i=0;i<tam;i++){
        arr[i]=arr2[i];
    }

    delete []arr2;
}

template<class T>
T List<T>::back(){
    return arr[tam-1];
}

template<class T>
T List<T>::front(){
    return arr[0];
}

template <class T>
void List<T>::merge(List l1){
    int tam_tmp=l1.get_size();
    T* arr2=new T[tam+tam_tmp];
    for(int i=0;i<tam+tam_tmp;i++){
        if(i < tam ){
            arr2[i]=arr[i];
        }   
        else{
            arr2[i]=l1.front();
            l1.pop_front();
        }     
    }
    delete []arr;
    tam=tam+tam_tmp;
    arr =new T[tam];

    for(int i=0;i<tam;i++){
        arr[i]=arr2[i];
    }
    delete []arr2;
}



template <class T>
void List<T>::sort(){
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(arr[i] < arr[j] ){
                swap(arr[i],arr[j]);
            }            
        }
    }
}


template <class T>
bool List<T>::binary_search(int ini,int end,T element){
    if(ini!=end){
        int medio=ini+((end-1)/2);
        cout<<medio<<endl;

        if(arr[medio] == element){
            cout<<arr[medio]<<endl;
            return true;
        }
        if(arr[medio] > element){
            return binary_search(ini,medio,element);
        }

        return binary_search(medio+1,end,element);

    }
    return false;
}

template <class T>
int List<T>::lower_bound(int init,int end,T element){
    if(end>=1){
        int medio=init+(end-1)/2;

        if(arr[medio]==element){
            return 1 + medio;
        }
        if(arr[medio] > element){
            return binary_search(init,medio,element);
        }
        return binary_search(medio+1,end,element);

    }

    return -1;
}


template<class T>
void List<T>::print(){
    cout<<endl;
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

#endif
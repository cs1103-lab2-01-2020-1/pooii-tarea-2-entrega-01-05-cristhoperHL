#ifndef EJERCICIOS_CPP
#define EJERCICIOS_CPP

#include "ejercicios.h"



void ejercicio2_4(){
    
    LIFO<int> elements;

    elements.push(5);
    cout<<elements.top()<<endl;
    elements.push(10);
    cout<<elements.top()<<endl;
    elements.push(30);
    cout<<elements.top()<<endl;
    elements.pop();
    cout<<elements.top()<<endl;

    
}


void ejercicio3(){

    int arr1[5]={1,2,3,4,5};
    int arr2[5]={11,12,13,14,15};

    List<int> list1(arr1,5);
    cout<<endl;
    List<int> list2(arr2,5);

    list2.merge(list1);
    cout<<endl;
    list2.print();

    list2.sort();

    list2.print();

    if(list1.binary_search(0,5,4)){
        cout<<"binary search"<<endl;
    }


}






#endif
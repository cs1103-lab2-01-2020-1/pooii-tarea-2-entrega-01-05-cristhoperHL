#ifndef PRODUCTO_CPP
#define PRODUCTO_CPP

#include "Producto.h"

Producto::Producto(const string &Nombre,const float &precio){
    this->Nombre=Nombre;
    this->precio=precio;
}


void Producto::set_precio(const float &precio){
    this->precio=precio;
}

string Producto::get_nombre()const{
    return Nombre;
}


float Producto::get_precio()const{
    return precio;
}
    




#endif
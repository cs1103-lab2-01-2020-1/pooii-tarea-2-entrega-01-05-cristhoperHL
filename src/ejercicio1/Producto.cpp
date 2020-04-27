#ifndef PRODUCTO_CPP
#define PRODUCTO_CPP

#include "Producto.h"

Producto::Producto(const string &Nombre,const float &precio,const bool &stock){
    this->Nombre=Nombre;
    this->precio=precio;
    this->stock=stock;
}

void Producto::set_id(const int &id){
    this->id=id;
}
void Producto::set_precio(const float &precio){
    this->precio=precio;
}
void Producto::set_stock(const bool &stock){
    this->stock=stock;
}

float Producto::get_precio()const{
    return precio;
}
bool Producto::get_stock()const{
    return stock;
}
    
int Producto::get_id()const{
    return id;
}




#endif
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "../librerias/tipos.h"

class Producto{

private:
    string Nombre;
    float precio;
    bool stock;
public:
    Producto(){}
    Producto(const string &Nombre,const float &precio);
    
    string get_nombre()const;
    void set_precio(const float &precio);
    float get_precio()const;
};




#endif
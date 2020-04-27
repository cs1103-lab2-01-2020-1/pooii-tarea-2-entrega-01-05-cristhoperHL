#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "tipos.h"

class Producto{

private:
    int id;
    string Nombre;
    float precio;
    bool stock;
public:
    Producto(){}
    Producto(const string &Nombre,const float &precio,const bool &stock);
    
    void set_id(const int &id);
    void set_precio(const float &precio);
    void set_stock(const bool &stock);

    float get_precio()const;
    bool get_stock()const;
    int get_id() const;
};




#endif
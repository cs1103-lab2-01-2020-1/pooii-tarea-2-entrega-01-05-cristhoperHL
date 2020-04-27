#ifndef ORDEN_H
#define ORDEN_H

#include"Producto.cpp"


class Orden{
private:
    int id;    
    float costo_orden;
    vector<Producto> v_p;
public:
    Orden(){}

    void set_costo_orden(const float &costo);

    void add_product(Producto &p);

    void set_id(const int& id);

    float get_costo_orden()const;

    vector<Producto> get_vector_products()const;

};

#endif
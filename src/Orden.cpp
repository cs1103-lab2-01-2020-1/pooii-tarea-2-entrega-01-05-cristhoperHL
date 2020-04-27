#ifndef ORDEN_CPP
#define ORDEN_CPP

#include"Orden.h"

void Orden::set_costo_orden(const float &costo){
    this->costo_orden=costo;
}

void Orden::add_product(Producto &p){
    v_p.push_back(p);
}

void Orden::set_id(const int& id){
    this->id=id;
}

float Orden::get_costo_orden()const{
    return costo_orden;
}

vector<Producto> Orden::get_vector_products()const{
    return v_p;
}


#endif
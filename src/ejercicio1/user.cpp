#ifndef USER_CPP
#define USER_CPP

#include "user.h"

User::User(const int &_id,const string &_username,const string &_password,const string &_direccion){
    this->id=_id;
    this->username=_username;
    this->password=_password;
    this->direccion=_direccion;
}


void User::add_orden(Orden ord){
    v_ordenes.push_back(ord);
}

//plus setters
void User::set_id(const int &id){
    this->id=id;
}

void User::set_direccion(const string &direccion){
    this->direccion=direccion;
}

void User::set_password(const string &password){
    this->password=password;
}

//getters
string User::get_username()const{
    return username;
}
string User::get_password()const{
    return password;
}
string User::get_direccion()const{
    return direccion;
}
int User::get_id()const{
    return id;
}

vector<Orden> User::get_v_ordenes(){
    return v_ordenes;
}
void User::trackear_orden(int _id){
    cout<<endl;
    cout<<"Destino : "<< direccion<<endl;
    cout<<"Estado : "<<"PROCESANDO"<<endl;
    cout<<"Camion"<<endl;
}

void User::print_ordenes(){

    for(int i=0;i<v_ordenes.size();i++){
        cout<<"id de Orden :"<<v_ordenes.at(i).get_id();
        vector<Producto> v_p=v_ordenes.at(i).get_vector_products();
        for(int j=0;j<v_p.size();j++){
            cout<<"nombre del producto :"<<v_p.at(j).get_nombre()<<endl;
        }
        cout<<"Precio Total:"<<v_ordenes.at(i).get_costo_orden(); 
        cout<<endl<<endl;
    }
}

#endif
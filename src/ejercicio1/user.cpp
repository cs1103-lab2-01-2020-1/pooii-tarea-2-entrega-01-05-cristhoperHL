#ifndef USER_CPP
#define USER_CPP

#include "user.h"

User::User(const string &_username,const string &_password,const string &_direccion){
    this->username=_username;
    this->password=_password;
    this->direccion=_direccion;
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

#endif
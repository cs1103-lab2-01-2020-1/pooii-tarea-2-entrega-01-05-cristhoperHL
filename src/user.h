#ifndef USER_H
#define USER_H

#include "Orden.cpp"

class User{
    private:
        int id;
        string username;
        string password;
        string direccion;        
    public:
        User(){}
        User(const string &_username,const string &_password,const string &_direccion);

        //plus setters
        void set_id(const int &id);
        void set_direccion(const string &direccion);
        void set_password(const string &password);

        //getters

        string get_username()const;
        string get_password()const;
        string get_direccion()const;
        int get_id()const;

};


#endif
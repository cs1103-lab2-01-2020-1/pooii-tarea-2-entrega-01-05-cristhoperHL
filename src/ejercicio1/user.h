#ifndef USER_H
#define USER_H

#include "Orden.cpp"

class User{
    private:
        int id;
        string username;
        string password;
        string direccion;
        vector<Orden> v_ordenes;
    public:
        User(){}
        User(const int& _id,const string &_username,const string &_password,const string &_direccion);

        void add_orden(Orden ord);
        //plus setters
        void set_id(const int &id);
        void set_direccion(const string &direccion);
        void set_password(const string &password);

        //getters

        string get_username()const;
        string get_password()const;
        string get_direccion()const;
        int get_id()const;
        
        vector<Orden> get_v_ordenes();

        void trackear_orden(int _id);

        void print_ordenes();


};


#endif
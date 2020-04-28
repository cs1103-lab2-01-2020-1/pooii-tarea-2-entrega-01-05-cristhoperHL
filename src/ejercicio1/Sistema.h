#ifndef SISTEMA_H
#define SISTEMA_H

#include"user.cpp"

class Sistema{
private:
    vector<User> v_users;
public:
    
    Sistema(){};

    void New_user(const string &_username,const string &_password,const string &_direccion);    
    int User_posicion(const string &_username,const string&_password);
    bool Authentication(const string &_username,const string &_password);
    void User_options(User &user_new,const int &posicion);
    void Menu();
    

};

#endif
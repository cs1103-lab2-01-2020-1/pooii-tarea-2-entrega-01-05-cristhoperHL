#ifndef SISTEMA_H
#define SISTEMA_H

#include"user.cpp"

class Sistema{
private:
    vector<User> v_users;
public:
    
    Sistema(){};

    void verifiy_Stock();
    void New_user();    
    void Authentication();
    void Menu();
    

};

#endif
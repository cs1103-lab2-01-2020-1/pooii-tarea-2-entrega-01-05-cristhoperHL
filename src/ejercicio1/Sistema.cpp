#ifndef SISTEMA_CPP
#define SISTEMA_CPP

#include"Sistema.h"
#include"Funciones.cpp"


void Sistema::set_users(){
    vector<string> data;
    data=Leer_datos("../data/users.csv")
        
}

void Sistema::verifiy_Stock(){

}
void Sistema::New_user(){

}    
void Sistema::Authentication(){

}
void Sistema::Menu(){

    int opcion;
    do{
        cout<<"1.Inicia sesion."<<endl<<"2.Registrate"<<endl;
        cin>>opcion;

        if(opcion==1){
            string username;
            string password;
            cout<<endl;
            cout<<endl<<"Username: ";
            cin>>username;
            cout<<endl<<"Password: ";
            cin>>password;
            Authentication();
        }
        else if(opcion==2){
            string username;
            string password;
            string direccion;
            cout<<endl;
            cout<<endl<<"Username: ";
            cin>>username;
            cout<<"Password: ";
            cin>>password;    
            cout<<"Direccion: ";
            cin>>direccion;
            
            New_user();
        }
    }while(true);
}



#endif
#ifndef SISTEMA_CPP
#define SISTEMA_CPP

#include"Sistema.h"


string Tracker_order(){


}


void Sistema::New_user(const string &_username,const string &_password,const string &_direccion){
    
    v_users.push_back(*(new User(v_users.size(),_username,_password,_direccion)));
    cout<<endl;
    cout<<"Usuario creado ahora inicie sesion."<<endl<<endl;
}    

int Sistema::User_posicion(const string &_username,const string &_password){
    for(int i=0;i<v_users.size();i++){
        if( (v_users.at(i).get_username() == _username ) &&  (v_users.at(i).get_password() == _password) ){
            return i;              
        }
    }

    return 0;
}

bool Sistema::Authentication(const string &_username,const string &_password){

    for(int i=0;i<v_users.size();i++){
        if( (v_users.at(i).get_username() == _username ) &&  (v_users.at(i).get_password() == _password) ){
            return true;              
        }
    }

    return false;
}
void Sistema::User_options(User &user_new,const int &posicion){
    int op;
    cout<<"Bienvenido "<<user_new.get_username()<<"."<<endl;
    bool terminar=true;
    while(terminar){
    cout<<"1.Crear una Orden."<<endl<<"2.Trackear una orden."<<endl<<"3.Ver ordenes"<<endl<<"4.Logout."<<endl;
    cin>>op;
    if(op==1){
        int opcion_2;
        cout<<endl;
        bool agregar=false;
        Orden ord_1;
        ord_1.set_id(user_new.get_v_ordenes().size());
        do{
        cout<<"Productos :"<<endl<<"1.Arroz con pollo -> 11.99$"<<endl<<"2.Lomo saltado -> 9.99$"<<endl<<"3.Lazaña -> 17.99$ "<<endl;
        cout<<"4.Bisteck a lo pobre -> 9.99$"<<endl<<"5.Gaseosa Inca kola -> 4.00$"<<endl<<"6.Gaseosa Coca Cola -> 4.50$"<<endl;
        cin>>opcion_2;
        
        switch(opcion_2){
            case 1:
                ord_1.add_product(*(new Producto("Arroz con pollo",11.99)));
                ord_1.set_costo_orden( ord_1.get_costo_orden() +11.99);
                break;
            case 2:
                ord_1.add_product(*(new Producto("Lomo saltado",9.99)));                
                ord_1.set_costo_orden( ord_1.get_costo_orden() +9.99);
                break;
            case 3:
                ord_1.add_product(*(new Producto("Lazaña",17.99)));
                ord_1.set_costo_orden( ord_1.get_costo_orden() +17.99);
                break;
            case 4:
                ord_1.add_product(*(new Producto("Bisteck a lo pobre",9.99)));               
                ord_1.set_costo_orden( ord_1.get_costo_orden() +9.99);
                break;
            case 5:
                ord_1.add_product(*(new Producto("Gaseosa Inca Kola",4.00)));
                ord_1.set_costo_orden( ord_1.get_costo_orden() +4.00);
                break;
            case 6:
                ord_1.add_product(*(new Producto("Gaseosa Coca kola",4.50)));
                ord_1.set_costo_orden( ord_1.get_costo_orden() +4.50);
                break;
        }
        char add;
        cout<<"Desea agregar un producto mas a su orden (s/n): ";
        cin>>add;

        if( add=='s'){
            agregar = true;
        }
        else if( add == 'n'){
            agregar = false;
        }

        }while(agregar);
        user_new.add_orden(ord_1);
        v_users[posicion]=user_new;
    }
    else if(op==2){
        if(!user_new.get_v_ordenes().empty() ){
        //aca va la funcion trackear_orden
        int _id;
        cout<<"Digite un id :";
        cin>>_id;  
        cout<<endl;
        user_new.trackear_orden(_id);
        }
        else{
            cout<<"No tiene ninguna orden."<<endl;
        }
    }
    else if(op=3){
        cout<<endl;
        if(!user_new.get_v_ordenes().empty() ){
        user_new.print_ordenes();
        }
        else{
            cout<<"No tiene ordenes"<<endl;
        }
    }   
    else if(op=4){
        terminar=false;
    }
    }
}
void Sistema::Menu(){

    int opcion;
    do{
        cout<<endl;
        cout<<"1.Inicia sesion."<<endl<<"2.Registrate"<<endl;
        cin>>opcion;

        if(opcion==1){
            string _username;
            string _password;
            cout<<endl;
            cout<<endl<<"Username: ";
            cin>>_username;
            cout<<endl<<"Password: ";
            cin>>_password;
            Authentication(_username,_password);
            if(Authentication(_username,_password)){
                int posicion=User_posicion(_username,_password);
                User new_user=v_users.at(posicion);
                User_options(new_user,posicion);
            }
        }
        else if(opcion==2){
            string _username;
            string _password;
            string _direccion;
            cout<<endl;
            cout<<endl<<"Username: ";
            cin>>_username;
            cout<<"Password: ";
            cin>>_password;    
            cout<<"Direccion: ";
            cin>>_direccion;      
            New_user(_username,_password,_direccion);

        }
    }while(true);
}



#endif
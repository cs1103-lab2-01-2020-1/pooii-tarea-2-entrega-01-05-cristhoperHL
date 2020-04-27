#ifndef FUNCIONES_CPP
#define FUNCIONES_CPP

#include"Funciones.h"


vector<string> delimit(string &prueba,char delim){
    vector<string> v_palabras;
    string palabra="";
    for(int i=0;i<prueba.size();i++){
        if(prueba[i] == delim){
            v_palabras.push_back(palabra);
            palabra="";
        }
        else if(i== (prueba.size()-1)){
            palabra=palabra+prueba[i];
            v_palabras.push_back(palabra);
            palabra="";
        }
        else{
            palabra=palabra+prueba[i];
        }
    }

    return v_palabras;
}


vector<string> Leer_datos(string nombre_del_archivo){
vector<string> datos;
string s;
ifstream f(nombre_del_archivo);
if(f.is_open()){
    while(!f.eof()){
        getline(f,s);
        datos.push_back(s);
    }
}
else{
    cerr<<"Error de apertura del archivo."<<endl;
}
f.close();
return datos;
}



#endif
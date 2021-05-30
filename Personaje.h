//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#include "Forma1.h"

class Personaje:public Forma1 {
public:
    Personaje(string);
};
Personaje::Personaje() : Forma1(){
    Nom = Personaje;
    cout << "Soy Personaje 1 " <<endl;
}


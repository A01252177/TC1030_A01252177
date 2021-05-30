//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#include "Item.h"

class Gema:public Item {
private:
    int GemaType; //todo tipo de Gemas
public:
    Gema();
    Gema(int, int, string, string, int);
    void use();
};
Gema::Gema() : Item(){
    GemaType = 0;
    cout <<"Ganaste una Gema"<<endl;
}
Gema::Gema(int g, int l, string n,  string d, int h):Item(l,n,d,h){
    GemaType = g;
}
void Gema::use(){
    cout << "+1 Gema, Recuerda que hay varios tipos de Gema, Encuentralas Todas!!!! " <<endl;
}
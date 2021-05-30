//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#include "Item.h"

class Potion:public Item {
private:
    int PotionType; //todo tipo de Potions
public:
    Potion();
    Potion(int, int, string, string, int);
    void use();
};
Potion::Potion() : Item(){
    PotionType = 0;
    cout <<"Ganaste una Potion"<<endl;
}
Potion::Potion(int g, int l, string n,  string d, int h):Item(l,n,d,h){
    PotionType = g;
}
void Potion::use(){
    cout << "+1 Potion, Recuerda que hay varios tipos de Potion, Encuentralas Todas!!!! " <<endl;
}
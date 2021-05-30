//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#include "Item.h"

class Coin:public Item {
private:
    int CoinType; //1 Coin
public:
    Coin();
    Coin(int, int, string, string, int);
    void use();
};
Coin::Coin() : Item(){
    CoinType = 0;
    cout <<"Ganaste una Coin"<<endl;
}
Coin::Coin(int g, int l, string n,  string d, int h):Item(l,n,d,h){
    CoinType = g;
}
void Coin::use(){
    cout << "+1 Coin, Recuerda que con esta Coin puedes negociar con el Duende!!" <<endl;
}
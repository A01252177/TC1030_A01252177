//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#include "Item.h"

class Key:public Item {
private:
    int KeyType; //1 key
public:
    Key();
    Key(int, int, string, string, int);
    void use();
};
Key::Key() : Item(){
    KeyType = 0;
    cout <<"Ganaste una Key"<<endl;
}
Key::Key(int g, int l, string n,  string d, int h):Item(l,n,d,h){
    KeyType = g;
}
void Key::use(){
    cout << "+1 Key, Recuerda que con esta Key puedes abrir la puerta para ganar!!" <<endl;
}
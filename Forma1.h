//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021
#ifndef Forma1_h
#define Forma1_h

#include "ItemPotion.h"
#include "ItemGema.h"
#include "ItemCoin.h"
#include "ItemKey.h"

class Forma1 {
protected:
    vector <Item*> vecItems;
public:
    Forma1();
    Forma1(int, int);

    void addItemGema();
    void addItemPotion();
    void addItemCoin();
    void addItemKey();
    void showInventory();

};

void Forma1::addItemGema(){
    Item *objItems;
    objItems = new Gema();
    vecItems.push_back(objItems);

}

void Forma1::addItemPotion(){
    Item *objItems;
    objItems = new Potion();
    vecItems.push_back(objItems);
    
}

void Forma1::addItemCoin(){
    Item *objItems;
    objItems = new Coin();
    vecItems.push_back(objItems);

}

void Forma1::addItemKey(){
    Item *objItems;
    objItems = new Key();
    vecItems.push_back(objItems);

}

void Forma1::showInventory(){
    cout <<"------ El Inventario es : -------"<<endl;
    for(int i = 0; i<vecItems.size(); i++){
        vecItems[i]->use();
    }
}

#endif
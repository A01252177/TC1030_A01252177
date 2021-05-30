//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#include <iostream>
#include <vector>
using namespace std;

#include "Personaje.h"

int main(){
    // Forma *Formas[5]; // arreglo de objetos Forma
    vector<Forma1*> vecFormas;
    Forma1 *objFormas;


    for (int i = 0; i<vecFormas.size(); i++){
        vecFormas[i]->draw();
    }

    vecFormas[0]->addItemGema();
    vecFormas[0]->addItemPotion();
    vecFormas[0]->addItemCoin();
    vecFormas[0]->addItemKey();
    vecFormas[0]->showInventory();

}
//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//29/05/2021

#ifndef Item_h
#define Item_h

class Item {
protected:
    int level;
    string name;
    string description;
    int HP;
public:
    Item();
    Item(int, string, string, int);
    virtual void use(); //virtual solo en declaracion

};
Item::Item(){
    level = 0;
    name = "";
    description = "";
    HP = 100;
    
}
Item::Item(int l, string n, string d, int h){
    level = 0;
    name = "";
    description = "";
    HP = 100;
}
void Item::use(){
    cout<<"ESTE USE NO SE DEBE LLAMAR DE LA CLASE BASE"<<endl;
}

#endif
#include "bloques.h"

bloques::bloques(){

}

void bloques::print(){
    cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

    vectorInts.resize(6);
    cout<<"\n\nvectorInts now has "<<vectorInts.size()<<" elements\n";
}


#include "arrpoligono.h"

arrPoligono::arrPoligono(int tam=0){
    this->tam=tam;
    arr = new polygon* [tam];
}


arrPoligono::arrPoligono(){

}

arrPoligono::~arrPoligono(){
    delete[] arr;
}


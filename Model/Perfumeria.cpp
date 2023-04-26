
#include "Perfumeria.h"
#include "eArticuloPerf.h"

Perfumeria::Perfumeria():Articulos(float Precio, unsigned int Stock){
    
}
Perfumeria::~Perfumeria() {

}
enum Perfumeria::get_ArticuloPerf(eArticuloPerf ArtPerf) {
    return this ->eArticuloPerf;
}


enum Perfumeria::set_ArticuloPerf(eArticuloPerf ArtPerf) {
    this->ArtPerf = ArtPerf;
}

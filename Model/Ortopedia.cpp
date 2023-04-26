
#include "Ortopedia.h"
#include "eArticuloOrt.h"

Ortopedia::Ortopedia() :Articulos(float Precio, unsigned int Stock) {

}

Ortopedia::~Ortopedia(){}

enum Ortopedia::get_ArticuloOrt(eArticuloOrt ArtOrtop) {
    return this->ArtOrtop;
}

enum Ortopedia::setArtOrt(eArticuloOrt ArtOrtop) {
    this->ArtOrtp = ArtOrtop;
}

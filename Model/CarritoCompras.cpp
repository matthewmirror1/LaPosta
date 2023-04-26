
#include "CarritoCompras.h"

CarritoCompras::CarritoCompras(float MontoTotal, unsigned int Nro) : Nro(Nro) {
    this->montoTotal = MontoTotal;
}

CarritoCompras::~CarritoCompras(){}

float CarritoCompras::CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia) {
   
}


float CarritoCompras::set_MontoTotal(float MontoTotal) {
    this->MontoTotal = MontoTotal;
}

float CarritoCompras::get_MontoTotal() {
    return this->MontoTotal;
}

bool CarritoCompras::AgregarArticulos(Articulos miArticulos) {
  
}

const unsigned int CarritoCompras::get_Nro() {
    return this->Nro;
}


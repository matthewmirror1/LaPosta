/**
 * Project Untitled
 */


#include "CarritoCompras.h"

CarritoCompras::CarritoCompras(float MontoTotal, unsigned int Nro) : Nro(Nro) {
    this->montoTotal = MontoTotal;
}


CarritoCompras::CarritoCompras(){}


float CarritoCompras::CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia) {
    return 0.0;
}

//creo un nuevo parametro con el NuevomontoTotal
float CarritoCompras::set MontoTotal(float NuevomontoTotal) {
    this-> MontoTotal=NuevomontoTotal
}

/**
 * @return float
 */
float CarritoCompras::get MontoTotal() {
    return 0.0;
}

void CarritoCompras::Operation1() {

}

/**
 * @param miArticulos
 * @return bool
 */
bool CarritoCompras::AgregarArticulos(Articulos miArticulos) {
    return false;
}

/**
 * @return const unsigned int
 */
const unsigned int CarritoCompras::get Nro() {
    return null;
}

void CarritoCompras::CarritoCompras() {

}
/**
 * Project Untitled
 */


#include "Cajero.h"

/**
 * Cajero implementation
 */


/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
Cajero(string Nombre, string Apellido, date Horario_Laboral, float Sueldo) {

}
/**
 * @param miPerfumeria
 * @param miGolosina
 * @param miOrtopedia
 * @param miFarmacia
 * @return float
 */
float Cajero::CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia) {
    return 0.0;
}

/**
 * @param miTicket
 * @return bool
 */
bool Cajero::Cobrar(Ticket miTicket) {
    return false;
}

/**
 * @param miCarrito
 * @param miTicket
 * @return void
 */
void Cajero::EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket) {
    return;
}

/**
 * @param miCliente
 * @return bool
 */
bool Cajero::EntregatRecibo(Cliente miCliente) {
    return false;
}
date Cajero::get_HorarioLaboral() {
    return this->HorarioLaboral;
}
//getters de cajero
date Cajero::set_HorarioLaboral(date NuevaHoraLaboral) {
    this->HorarioLaboral = NuevoHorarioLaboral;
}
float Cajero::set_Sueldo(float NuevoSueldo) {
    this->Sueldo = NuevoSueldo;
}

 Cajero::~Cajero() {

}
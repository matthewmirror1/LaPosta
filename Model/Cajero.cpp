


#include "Cajero.h"




Cajero::Empleado(string Nombre, string Apellido, date HorarioLaboral, float Sueldo) {

}
Cajero::~Cajero() {

}

float Cajero::CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia) {
   
}

bool Cajero::Cobrar(Ticket miTicket) {
    return false;
}


void Cajero::EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket) {
   
}


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

/**
 * Project Untitled
 */

//comentario prueba
#include "Empleado.h"

 //constructor
Empleado::Empleado(string Nombre, string Apellido, date HorarioLaboral, float Sueldo) {
    this->nombre = Nombre;
    this->apellido = Apellido;
    this->horarioLaboral = HorarioLaboral;
    this->sueldo = Sueldo;
}

//destructor
Empleado::~Empleado() {

}

unsigned int Empleado::LlamarPorTicket(Cliente miCliente) {
    return null;
}

/**
 * @param miCliente
 */
void Empleado::ExpenderSolictado(Cliente miCliente) {

}

/**
 * @param miCliente.Cliente
 * @return float
 */
float Empleado::AplicarDescuento(void miCliente.Cliente) {
    return 0.0;
}

/**
 * @return float
 */
float Empleado::FacturaryGeneraTicket() {
    return 0.0;
}

//setters

    //crear un parametro de NuevaHoraLaboral
date Empleado::set_HorarioLaboral(date NuevaHoraLaboral) {
    this->HorarioLaboral = NuevoHorarioLaboral;
}

//crear un parametro de NuevoSueldo
float Empleado::set_Sueldo(float NuevoSueldo) {
    this->Sueldo = NuevoSueldo;
}

//getters
date Empleado::get_HorarioLaboral() {
    return this->HorarioLaboral;
}

float Empleado::get_Sueldo() {
    return this->Sueldo;
}
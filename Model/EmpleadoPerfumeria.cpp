/**
 * Project Untitled
 */


#include "EmpleadoPerfumeria.h"

/**
 * EmpleadoPerfumeria implementation
 */


/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
EmpleadoPerfumeria::EmpleadoPerfumeria(string Nombre, string Apellido, date Horario_Laboral, float Sueldo) {

}
EmpleadoPerfumeria::~EmpleadoPerfumeria() {

}
/**
 * @param miArticulos
 * @return void
 */
void EmpleadoPerfumeria::AsesorarPerfum(Articulos miArticulos) {
    return;
}
float EmpleadoPerfumeria::get_Sueldo() {
    return this->Sueldo;
}
date EmpleadoPerfumeria::get_HorarioLaboral() {
    return this->HorarioLaboral;
}
//geters de Empleado Perf
date  EmpleadoPerfumeria::set_HorarioLaboral(date NuevaHoraLaboral) {
    this->HorarioLaboral = NuevoHorarioLaboral;
}
float   EmpleadoPerfumeria::set_Sueldo(float NuevoSueldo) {
    this->Sueldo = NuevoSueldo;
}
//settters de empleado de perf


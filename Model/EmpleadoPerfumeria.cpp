


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria:EmpleadoPerfumeria::Empleado(string Nombre, string Apellido, date Horario_Laboral, float Sueldo) {

}
EmpleadoPerfumeria::~EmpleadoPerfumeria() {

}

void EmpleadoPerfumeria::AsesorarPerfum(Articulos miArticulos) {
    
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


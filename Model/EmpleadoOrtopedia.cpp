/**
 * Project Untitled
 */


#include "EmpleadoOrtopedia.h"

/**
 * EmpleadoOrtopedia implementation
 */


/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
EmpleadoOrtopedia::EmpleadoOrtopedia(string Nombre, string Apellido, date Horario_Laboral, float Sueldo); {

}
EmpleadoOrtopedia::~EmpleadoOrtopedia()
 {

 }

/**
 * @param miArticulos
 * @return void
 */
void EmpleadoOrtopedia::AsesorarArtOrtop(Articulos miArticulos) {
    return;
}

/**
 * @param miArticulos
 * @return void
 */
void EmpleadoOrtopedia::Empacar(Articulos miArticulos) {
    return;
}

void EmpleadoOrtopedia::EmpleadoOrtopedia() {

}
float EmpleadoOrtopedia::get_Sueldo() {
    return this->Sueldo;
}
date  EmpleadoOrtopedia::get_HorarioLaboral() {
    return this->HorarioLaboral;
}
//getters del empleado de ortopedia
date   EmpleadoOrtopedia::set_HorarioLaboral(date NuevaHoraLaboral) {
    this->HorarioLaboral = NuevoHorarioLaboral;
}
float  EmpleadoOrtopedia::set_Sueldo(float NuevoSueldo) {
    this->Sueldo = NuevoSueldo;
}
//setters del empleado de ortopedia
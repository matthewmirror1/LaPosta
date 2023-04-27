


#include "EmpleadoOrtopedia.h"


EmpleadoOrtopedia:EmpleadoOrtopedia::Empleado (string Nombre, string Apellido, date Horario_Laboral, float Sueldo) {

}
EmpleadoOrtopedia::~EmpleadoOrtopedia()
 {

 }


void EmpleadoOrtopedia::AsesorarArtOrtop(Articulos miArticulos) {
    return;
}

void EmpleadoOrtopedia::Empacar(Articulos miArticulos) {
    return;
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
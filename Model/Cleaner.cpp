/**
 * Project Untitled
 */


#include "Cleaner.h"

/**
 * Cleaner implementation
 */


/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
Cleaner(string Nombre, string Apellido, date Horario_Laboral, float Sueldo)
{

}
Cleaner::~Cleaner() {

}
/**
 * @return bool
 */
bool Cleaner::LimpiarOrdenar() {
    return false;
}


float Cleaner::get_Sueldo() {
    return this->Sueldo;
}
date Cleaner::get_HorarioLaboral() {
    return this->HorarioLaboral;
}
//getter de Cleaner
date Cleaner::set_HorarioLaboral(date NuevaHoraLaboral) {
    this->HorarioLaboral = NuevoHorarioLaboral;
}


float Cleaner::set_Sueldo(float NuevoSueldo) {
    this->Sueldo = NuevoSueldo;
}
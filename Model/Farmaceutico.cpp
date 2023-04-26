/**
 * Project Untitled
 */


#include "Farmaceutico.h"

/**
 * Farmaceutico implementation
 */


/**
 * @param string
 * @param string
 * @param date
 * @param float
 * @param unsigned int
 */
//Constructor de Farmaceutico
Farmaceutico(string Nombre, string Apellido, date Horario_Laboral, float Sueldo, unsigned int NroMatricula) {

}
Farmaceutico::~Farmaceutico();{}
/**
 * @param miCliente
 * @return bool
 */
bool Farmaceutico::VerificarReceta(Cliente miCliente) {
    return false;
}

/**
 * @param miCliente
 * @param miArticulos
 * @return void
 */
void Farmaceutico::VentaMedicamentosReceta(Cliente miCliente, Articulos miArticulos) {
    return;
}

/**
 * @param miArticulos
 * @return void
 */
void Farmaceutico::RecomendacionVentaLibre(Articulos miArticulos) {
    return;
}

/**
 * @param miArticulos
 * @return void
 */
void Farmaceutico::AconsejaDosificacion(Articulos miArticulos) {
    return;
}

/**
 * @return unsigned int
 */
unsigned int Farmaceutico::get_NroMatricula() {
    return this->NroMatricula;
}
date Farmaceutico::get_HorarioLaboral() {
    return this->HorarioLaboral;
}
    //getter de farmaceutico
    date Farmaceutico::set_HorarioLaboral(date NuevaHoraLaboral) {
        this->HorarioLaboral = NuevoHorarioLaboral;
    }
    float Farmaceutico::set_Sueldo(float NuevoSueldo) {
        this->Sueldo = NuevoSueldo;
    }

/**
 * Project Untitled
 */


#include "Farmaceutico.h"

/**
 * Farmaceutico implementation
 */


Farmaceutico::Farmaceutico(unsigned int NroMatricula):Empleado(string Nombre, string Apellido, date HorarioLaboral, float Sueldo) {

}
~Farmaceutico(){}

bool Farmaceutico::VerificarReceta(Cliente miCliente) {
    return false;
}


void Farmaceutico::VentaMedicamentosReceta(Cliente miCliente, Articulos miArticulos) {
    return;
}


void Farmaceutico::RecomendacionVentaLibre(Articulos miArticulos) {
    return;
}


void Farmaceutico::AconsejaDosificacion(Articulos miArticulos) {
    return;
}

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

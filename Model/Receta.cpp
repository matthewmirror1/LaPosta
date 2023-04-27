

#include "Receta.h"

Receta::Receta(string Medicamento, string Medico, const unsigned int NroMatricula, string NroAfiliado, string ObraSocial, string Dosificacion) :NroMatricula(NroMatricula) {
    this->medicamento = Medicamento;
    this->medico = Medico;
    this->nroAfiliado = NroAfiliado;
    this->obraSocial = ObraSocial;
    this->dosificacion = Dosificacion;
}

Receta::~Receta(){}

string Receta::get_medicamento() {
    return this->Medicamento;
}

string Receta::get_dosificacion() {
    return this->Dosificacion; 
}

string Receta::get_nroAfiliado() {
    return this->NroAfiliado;
}

string Receta::get_obrasocial() {
    return this->ObraSocial;
}


string Receta::set_ObraSocial(sting obraSocial) {
    this->ObraSocial = obrasocial;
}

string Receta :: set_Dosificacion(string dosificacion) {
    this->Dosificacion = dosificacion;
}

string Receta::set_Medicamento(string medicamento) {
    this->Medicamento = medicamento;
}
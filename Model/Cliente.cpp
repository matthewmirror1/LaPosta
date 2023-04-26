
#include "Cliente.h"

unsigned int Cliente::SacarTicket(AsistAutomatico miAsistAutomatico) {
    
}

void Cliente::EntregarSolicitado() {
    
}

void Cliente::Abonar(Ticket miTicket) {
    
}

//constructor
Cliente::Cliente(string Nombre, string Apellido, string DNI, string NroAfiliado, unsigned int CodigoSeguridad, string Receta, unsigned int NroTicket, bool SoloKiosco) :NroAfiliado(NroAfiliado) {
	this->nombre = Nombre;
	this->apellido = Apellido;
	this->dni = DNI;
	this->codigoSeguridad = CodigoSeguridad;
	this->receta = Receta;
	this->mail = Mail;
	this->nroTicket = NroTicket;
	this->soloKiosco = SoloKiosco;
}

//destructor
Cliente::~Cliente() {
}


//getters
string Cliente::get_Mail()
{
	return this->Mail;
}

string Cliente::get_DNI() {
	return this->DNI;
}

const string Cliente::get_NroAfiliado() {
	return this->NroAfiliado;
}

unsigned int Cliente::get_CodigoSeguridad() {
	return this->CodigoSeguridad;
}

string Cliente::get_Receta() {
	return this->Receta;
}

string Cliente::get_NroTicket() {
	return this->NroTicket;
}

//setters
unsigned int Cliente::set_CodigoSeguridad(unsigned int CodigoSeguridad) {
	this->CodigoSeguridad = CodigoSeguridad;
}
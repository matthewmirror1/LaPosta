/**
 * Project Untitled
 */


#include "Cliente.h"




/**
 * @param miAsistAutomatico
 * @return unsigned int
 */
unsigned int Cliente::SacarTicket(AsistAutomatico miAsistAutomatico) {
    return null;
}

/**
 * @return void
 */
void Cliente::EntregarSolicitado() {
    return;
}

/**
 * @param miTicket
 * @return void
 */
void Cliente::Abonar(Ticket miTicket) {
    return;
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

	//como parametro entra nuevo codigo de seguridad (NuevoCodigo)
unsigned int Cliente::set_CodigoSeguridad(unsigned int NuevoCodigo) {
	this->CodigoSeguridad = NuevoCodigo;
}
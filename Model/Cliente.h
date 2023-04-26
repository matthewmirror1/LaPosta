
#ifndef _CLIENTE_H
#define _CLIENTE_H

class Cliente {
public: 
Cliente(string Nombre, string Apellido, string DNI, string NroAfiliado, unsigned int CodigoSeguridad, string Receta, unsigned int NroTicket, bool SoloKiosco) :NroAfiliado(NroAfiliado);
~Cliente();
unsigned int SacarTicket(AsistAutomatico miAsistAutomatico);
void EntregarSolicitado();
void Abonar(Ticket miTicket);  
string get_Mail();
unsigned int set_CodigoSeguridad(unsigned int CodigoSeguridad);   
string get_DNI();   
const string get_NroAfiliado();   
unsigned int get_CodigoSeguridad();
string get_Receta();
unsigned int get_NroTicket();

private: 
    string Nombre;
    string Apellido;
    string DNI;
    const string NroAfiliado;
    unsigned int CodigoSeguridad;
    string Receta;
    string Mail;
    unsigned int NroTicket;
    void SoloKiosco; bool;
};

#endif //_CLIENTE_H
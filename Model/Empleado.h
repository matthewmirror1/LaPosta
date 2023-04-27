


#ifndef _EMPLEADO_H
#define _EMPLEADO_H


class Empleado{
public: 

Empleado(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
~Empleado();
float set_Sueldo(float Sueldo);
date get_HorarioLaboral();
float get_Sueldo();
unsigned int LlamarPorTicket(Cliente miCliente);
void ExpenderSolictado(Cliente miCliente);
float AplicarDescuento( miCliente.Cliente);
float FacturaryGeneraTicket();
date set_HorarioLaboral( date HorarioLaboral);
    
protected: 
    string Nombre;
    string Apellido;
    date Horariolaboral;
    float Sueldo;
   

};

#endif //_EMPLEADO_H
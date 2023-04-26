


#ifndef _EMPLEADO_H
#define _EMPLEADO_H




class Empleado{
public: 


Empleado(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
~Empleado();

float setSueldo();

date getHorarioLaboral();

float getSueldo();
unsigned int LlamarPorTicket(Cliente miCliente);


void ExpenderSolictado(Cliente miCliente);

float AplicarDescuento(void miCliente.Cliente);
    
float FacturaryGeneraTicket();
    

date setHorarioLaboral( date HorarioLaboral);
    


protected: 
    string Nombre;
    string Apellido;
    date Horariolaboral;
    float Sueldo;
    

};

#endif //_EMPLEADO_H
/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Cajero.h"


class Empleado: public Cajero {
public: 
    
void Operation1();
    
void Operation2();
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
Empleado(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
~Empleado();
/**
 * @param miCliente
 */
float setSueldo();

date getHorarioLaboral();

float getSueldo();
unsigned int LlamarPorTicket(Cliente miCliente);

/**
 * @param miCliente
 */
void ExpenderSolictado(Cliente miCliente);
    
/**
 * @param miCliente.Cliente
 */
float AplicarDescuento(void miCliente.Cliente);
    
float FacturaryGeneraTicket();
    
/**
 * @param date HorarioLaboral
 */
date setHorarioLaboral(void date HorarioLaboral);
    
/**
 * @param float Sueldo
 */

protected: 
    string Nombre;
    string Apellido;
    date Horariolaboral;
    float Sueldo;
    

};

#endif //_EMPLEADO_H
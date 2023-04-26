/**
 * Project Untitled
 */


#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"


class EmpleadoPerfumeria: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
    EmpleadoPerfumeria(string Nombre, string Apellido, date Horario_Laboral, float Sueldo); 
    ~EmpleadoPerfumeria();
/**
 * @param miArticulos
 */
void AsesorarPerfum(Articulos miArticulos);
protected: 
    

private: 
    void Comisiones;float;
};

#endif //_EMPLEADOPERFUMERIA_H
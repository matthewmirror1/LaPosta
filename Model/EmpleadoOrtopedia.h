/**
 * Project Untitled
 */


#ifndef _EMPLEADOORTOPEDIA_H
#define _EMPLEADOORTOPEDIA_H

#include "Empleado.h"


class EmpleadoOrtopedia: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
     EmpleadoOrtopedia(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
     ~EmpleadoOrtopedia();
/**
 * @param miArticulos
 */
void AsesorarArtOrtop(Articulos miArticulos);
    
/**
 * @param miArticulos
 */
void Empacar(Articulos miArticulos);
protected: 
    

};

#endif //_EMPLEADOORTOPEDIA_H
/**
 * Project Untitled
 */


#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"


class Cleaner: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
    Cleaner(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);

    
bool LimpiarOrdenar();
protected: 
    
~Cleaner();
};

#endif //_CLEANER_H
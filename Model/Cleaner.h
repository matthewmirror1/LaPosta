

#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"


class Cleaner: public Empleado {
public: 

 
    Cleaner(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
    ~Cleaner();
    
bool LimpiarOrdenar();
protected: 
    

};

#endif //_CLEANER_H
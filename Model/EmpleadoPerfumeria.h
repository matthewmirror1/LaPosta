
#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"


class EmpleadoPerfumeria: public Empleado {
public: 
    

 
    EmpleadoPerfumeria(); 
    ~EmpleadoPerfumeria();
/**
 * @param miArticulos
 */
void AsesorarPerfum(Articulos miArticulos);
protected: 
    


};

#endif //_EMPLEADOPERFUMERIA_H
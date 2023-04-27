
#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"


class EmpleadoPerfumeria : public Empleado {
public:



    EmpleadoPerfumeria();
    ~EmpleadoPerfumeria();

    void AsesorarPerfum(Articulos miArticulos);

    EmpleadoPerfumeria::set_HorarioLaboral(date NuevaHoraLaboral);
    
    float   EmpleadoPerfumeria::set_Sueldo(float NuevoSueldo);
    
    date EmpleadoPerfumeria::get_HorarioLaboral();
    
    float EmpleadoPerfumeria::get_Sueldo();






protected:
};

#endif //_EMPLEADOPERFUMERIA_H
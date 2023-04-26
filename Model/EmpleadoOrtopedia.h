

#ifndef _EMPLEADOORTOPEDIA_H
#define _EMPLEADOORTOPEDIA_H

#include "Empleado.h"


class EmpleadoOrtopedia: public Empleado {
public: 
    

     EmpleadoOrtopedia(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
     ~EmpleadoOrtopedia();

void AsesorarArtOrtop(Articulos miArticulos);

void Empacar(Articulos miArticulos);
protected: 
    

};

#endif //_EMPLEADOORTOPEDIA_H
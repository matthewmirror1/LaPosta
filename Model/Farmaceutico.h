/**
 * Project Untitled
 */


#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "Empleado.h"


class Farmaceutico: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 * @param unsigned int
 */
    Farmaceutico(string Nombre, string Apellido, date Horario_Laboral, float Sueldo, unsigned int NroMatricula);
    ~Farmaceutico();
/**
 * @param miCliente
 */
bool VerificarReceta(Cliente miCliente);
    
/**
 * @param miCliente
 * @param miArticulos
 */
void VentaMedicamentosReceta(Cliente miCliente, Articulos miArticulos);
    
/**
 * @param miArticulos
 */
void RecomendacionVentaLibre(Articulos miArticulos);
    
/**
 * @param miArticulos
 */
void AconsejaDosificacion(Articulos miArticulos);
    
unsigned int get NroMatricula();
protected: 
    

private: 
    const unsigned int NroMatricula;
};

#endif //_FARMACEUTICO_H
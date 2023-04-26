/**
 * Project Untitled
 */


#ifndef _CAJERO_H
#define _CAJERO_H

#include "Empleado.h"


class Cajero: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
    Cajero(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
    Cajero();
/**
 * @param miPerfumeria
 * @param miGolosina
 * @param miOrtopedia
 * @param miFarmacia
 */
float CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia);
    
/**
 * @param miTicket
 */
bool Cobrar(Ticket miTicket);
    
/**
 * @param miCarrito
 * @param miTicket
 */
void EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket);
    
/**
 * @param miCliente
 */
bool EntregatRecibo(Cliente miCliente);
protected: 
    

};

#endif //_CAJERO_H
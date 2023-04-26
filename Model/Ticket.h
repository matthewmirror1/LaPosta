/**
 * Project Untitled
 */


#ifndef _TICKET_H
#define _TICKET_H

class Ticket {
public: 
    
/**
 * @param float
 * @param const string
 * @param eMetodoPago
 * @param const string
 * @param bool
 */
    Ticket(float PrecioFinal, string DNI, eMetodoPago MetodoPago, string CUIT, bool Descuento);
    ~Ticket();
bool AplicarDescuento();
protected: 
    
 
private: 
    float PrecioFinal;
    const string DNI;
    eMetodoPago MetodoPago;
    const string CUIT;
    bool Descuento;
};

#endif //_TICKET_H
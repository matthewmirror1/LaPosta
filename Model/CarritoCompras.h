
#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H

class CarritoCompras {
public: 
CarritoCompras(float MontoTotal, unsigned int Nro);
~CarritoCompras();
float CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia);
float set_MontoTotal(float MontoTotal);
float get_MontoTotal();
bool AgregarArticulos(Articulos miArticulos);  
const unsigned int get_Nro();

private: 
    float MontoTotal;
    const unsigned int Nro;
};

#endif //_CARRITOCOMPRAS_H
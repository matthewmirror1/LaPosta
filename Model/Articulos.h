
//listo

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class Articulos{

public: 
    Articulos(float Precio,unsigned int Stock);
    ~Articulos();

    float get_Precio();
    unsigned int get_Stock();

    float set_Precio(float Precio);
    float set_Stock(unsigned int Stock);

protected: 
    float Precio;
    unsigned int Stock;
    
};

#endif //_ARTICULOS_H
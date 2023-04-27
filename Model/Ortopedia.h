
#ifndef _ORTOPEDIA_H
#define _ORTOPEDIA_H

#include "Articulos.h"
#include "eArticuloOrt.h"


class Ortopedia: public Articulos {
public: 
    Ortopedia();
    ~Ortopedia();
   
enum get_ArticuloOrt(eArticuloOrt ArtOrtop);
void setArtOrt(eArticuloOrt artOrtop);

private: 
    eArticuloOrt ArtOrtop;
};

#endif //_ORTOPEDIA_H
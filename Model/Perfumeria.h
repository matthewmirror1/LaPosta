
#ifndef _PERFUMERIA_H
#define _PERFUMERIA_H

#include "Articulos.h"
#include "eArticuloPerf.h"

class Perfumeria: public Articulos {

public: 
Perfumeria();
~ Perfumeria(); 
enum get_ArticuloPerf();  
enum set_ArticuloPerf();

private: 
    eArticuloPerf ArtPerf;
    string Size;
};

#endif //_PERFUMERIA_H
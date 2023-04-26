
#ifndef _LOCAL_H
#define _LOCAL_H

class Local {
public: 
    Local(string Nombre, string Direccion, date HorarioSemana, date HorarioFinDeSemana, string Contacto);
    ~Local();
string set_Contacto(string Contacto);  
date get_HorarioFinDeSemana();

private: 
    string Nombre;
    string Direccion;
    date HorarioSemana;
    date HorarioFinDeSemana;
    string Contacto;
};

#endif //_LOCAL_H
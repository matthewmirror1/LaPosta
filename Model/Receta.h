/**
 * Project Untitled
 */


#ifndef _RECETA_H
#define _RECETA_H

class Receta {
public: 
    string ObraSocial;
    string Dosificacion;
    
/**
 * @param string
 * @param string
 * @param unsigned int
 * @param string
 * @param string
 * @param string
 */
void Receta(void string, void string, void unsigned int, void string, void string, void string);
    
/**
 * @param string Medicamento
 */
string get_medicamento(void string Medicamento);
    
/**
 * @param string dosificacion
 */
string get_dosificacion(void string dosificacion);
    
/**
 * @param string NroAfiliado
 */
string get_nroAfiliado(void string NroAfiliado);
    
/**
 * @param string ObraSocial
 */
string get_obrasocial(void string ObraSocial);
protected: 
    
void Receta();
private: 
    string Medicamento;
    string Medico;
    const unsigned int NroMatricula;
    string NroAfiliado;
};

#endif //_RECETA_H
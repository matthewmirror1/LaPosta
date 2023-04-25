 * Project Untitled
 */


#include "Articulos.h"
	 //buen dia
Articulos::Articulos(float Precio, unsigned int Stock) {
	 this->precio = Precio;
	 this->stock = Stock;
 }

 Articulos::~Articulos() {}

 //getters

 float Articulos::get_Precio() {
	 return this->Precio;
 }

 unsigned int Articulos::get_Stock() {
	 return this->Stock;
 }

 //setters

 //crear un parametro de Nuevoprecio
 date Articulos::set_HorarioLaboral(date NuevoPrecio) {
	 this->Precio = Nuevoprecio;
 }

 //crear un parametro de Nuevosueldo
 float Articulos::set_Sueldo(date Nuevosueldo) {
	 this->Sueldo = Nuevosueldo;
 }


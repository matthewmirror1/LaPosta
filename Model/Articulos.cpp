 * Project Untitled
 */


#include "Articulos.h"
	
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
 float Articulos::set_Precio(float Precio) {
	 this->Precio =Precio;
 }

 unsigned int Articulos::set_Stock(unsigned int Stock) {
	 this->Stock = Stock;
 }


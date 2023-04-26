
#include "AsistAutomatico.h"
AsistAutomatico::AsistAutomatico() {

}
AsistAutomatico::~AsistAutomatico() {}

string AsistAutomatico::get_NroTurno() {
    return this->NroTurno;
}

string AsistAutomatico::ImprimirTicket(void eNecesidad necesidad) {
   
}

enum AsistAutomatico::get_Necesidad() {
    return this->necesidad;
}

enum AsistAutomatico::set Necesidad(eNecesidad necesidad) {
    this->necesidad = necesidad;
}

string AsistAutomatico::get NroTurno() {
    return this->NroTicket;
}

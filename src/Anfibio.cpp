#include "../include/Anfibio.hpp"

Anfibio::Anfibio(
    int id,
    string especie,
    string nome,
    string genero,
    familia classe,
    string veterinario,
    string tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado,
    string habitat,
    bool possui_ovos) : Animal(id,
                               especie,
                               nome,
                               genero,
                               classe,
                               veterinario,
                               tratador,
                               tipo_temperatura,
                               tipo_pele,
                               tipo_fecundacao,
                               troca_pele,
                               material_eliminidado),
                        habitat(habitat),
                        possui_ovos(possui_ovos) {}

Anfibio::~Anfibio() {}

ostream& Anfibio::imprimeDados(ostream& o) const {
    o << this->especie << "\n"
      << this->genero << "\n"
      << this->habitat << "\n"
      << this->classe << "\n"
      << this->id << "\n"
      << this->material_eliminidado << "\n"
      << this->nome << "\n"
      << this->especie << "\n"
      << this->habitat << "\n";
    return o;
}

string Anfibio::getHabitat() {
    return this->habitat;
}
bool Anfibio::getPossui_ovos() {
    return possui_ovos;
}

#include "Anfibio.hpp"

Anfibio::Anfibio(
    int id,
    string especie,
    string nome,
    t_genero genero,
    familia classe,
    std::shared_ptr<Funcionario> veterinario,
    std::shared_ptr<Funcionario> tratador,
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
    return o;
}

string Anfibio::getHabitat() {
    return this->habitat;
}
bool Anfibio::getPossui_ovos() {
    return this->possui_ovos;
}

void Anfibio::setHabitat(string habitat_) {
    this->habitat = habitat_;
}
void Anfibio::setPossui_ovos(bool ovos) {
    this->possui_ovos = ovos;
}

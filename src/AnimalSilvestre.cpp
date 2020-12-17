#include "AnimalSilvestre.hpp"

AnimalSilvestre::AnimalSilvestre(
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao) : aquatico_terrestre(aquatico_terrestre),
                           registro_ibama(registro_ibama),
                           territorio_brasileiro(territorio_brasileiro),
                           extincao(extincao) {}

AnimalSilvestre::~AnimalSilvestre() {}

// Getters

string AnimalSilvestre::getAquatico_terrestre() {
    return this->aquatico_terrestre;
}
bool AnimalSilvestre::getRegistro_ibama() {
    return this->registro_ibama;
}
bool AnimalSilvestre::getTerritorio_brasileiro() {
    return this->territorio_brasileiro;
}
enExtincao AnimalSilvestre::getExtincao() {
    return this->extincao;
}

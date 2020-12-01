#include "../include/AnimalSilvestre.hpp"

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


//Setters
string AnimalSilvestre::setAquatico_terrestre(string aquatico_terrestre) {
    this->aquatico_terrestre = aquatico_terrestre;
}
bool AnimalSilvestre::setRegistro_ibama(bool registro_ibama) {
    this->registro_ibama = registro_ibama;
}
bool AnimalSilvestre::setTerritorio_brasileiro(bool territorio_brasileiro) {
    this->territorio_brasileiro = territorio_brasileiro;
}
enExtincao AnimalSilvestre::setExtincao(enExtincao extincao) {
    this->extincao = extincao;
}
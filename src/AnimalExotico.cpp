#include <iomanip>
#include <iostream>

#include "AnimalExotico.hpp"
#include "AnimalSilvestre.hpp"

AnimalExotico::AnimalExotico(
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao,
    string pais_origem) : AnimalSilvestre(aquatico_terrestre,
                                          registro_ibama,
                                          territorio_brasileiro,
                                          extincao),
                          pais_origem(pais_origem) {}

AnimalExotico::~AnimalExotico() {}

// Getters

string AnimalExotico::getPais_origem() {
    return this->pais_origem;
}

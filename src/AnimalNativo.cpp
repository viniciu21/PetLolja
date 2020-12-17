#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "AnimalNativo.hpp"

AnimalNativo::AnimalNativo(
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao) : AnimalSilvestre(aquatico_terrestre,
                                           registro_ibama,
                                           territorio_brasileiro,
                                           extincao) {}

AnimalNativo::~AnimalNativo() {}

// Getters

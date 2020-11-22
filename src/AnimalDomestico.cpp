#include <iomanip>
#include <iostream>

#include "../include/AnimalDomestico.hpp"
#include "../include/AnimalSilvestre.hpp"

AnimalDomestico::AnimalDomestico(string nome_animal, string nome_dono):
    nome_animal(nome_animal), nome_dono(nome_dono){}

AnimalDomestico::~AnimalDomestico() {}

// Getters

string AnimalDomestico::getNome_animal() {
    return this->nome_animal;
}

string AnimalDomestico::getNome_dono() {
    return this->nome_dono;
}

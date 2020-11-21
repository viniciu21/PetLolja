#include <iomanip>
#include<iostream>

using std::setfill;
using std::setw;
using std::cout;
using std::endl;

#include "AnimalSilvestre.hpp"
#include "AnimalExotico.hpp"

AnimalExotico::AnimalExotico(
	string       aquatico_terrestre,
	bool         registro_ibama,
	bool         territorio_brasileiro,
	enExtincao   extincao,
	string       pais_origem
	):
		AnimalSilvestre(
			material_eliminidado,
			aquatico_terrestre,
			registro_ibama,
			territorio_brasileiro,
			extincao), pais_origem(pais_origem){}

AnimalExotico::~AnimalExotico(){}


// Getters

vector<AnimalExotico*> AnimalExotico::getExotico(){
	return this->exotico;
}

string   AnimalExotico::getPais_origem(){
	return this->pais_origem;
}

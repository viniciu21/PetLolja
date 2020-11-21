#include <iomanip>

#include<iostream>
using std::setfill;
using std::setw;
using std::cout;
using std::endl;

#include "AnimalNativo.hpp"

AnimalNativo::AnimalNativo(
	string       aquatico_terrestre,
	bool         registro_ibama,
	bool         territorio_brasileiro,
	enExtincao   extincao
	):
		AnimalSilvestre(
			aquatico_terrestre,
			registro_ibama,
			territorio_brasileiro,
			extincao){}

AnimalNativo::~AnimalNativo(){}


// Getters

vector<AnimalNativo*> AnimalNativo::getNativos(){
	return this->nativos;
}

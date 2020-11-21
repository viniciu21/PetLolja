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

ostream& AnimalNativo::imprimeDados(ostream& o) const{
	o   << setfill(' ') << setw(10) << this->aquatico_terrestre
		<< setfill(' ') << setw(10) << this->registro_ibama
		<< setfill(' ') << setw(10) << this->territorio_brasileiro
		<< setfill(' ') << setw(10) << (this->extincao==ameacado ? "Risco de extincao" : "Nao corre risco de extincao")
		<< setfill(' ') << setw(6);
	return o;
}
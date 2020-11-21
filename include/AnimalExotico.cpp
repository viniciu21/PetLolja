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

ostream& AnimalExotico::imprimeDados(ostream& o) const{
	o   << setfill(' ') << setw(10) << this->id
		<< setfill(' ') << setw(10) << this->especie
		<< setfill(' ') << setw(10) << this->nome
		<< setfill(' ') << setw(10) << this->genero
		<< setfill(' ') << setw(10) << this->veterinario
		<< setfill(' ') << setw(10) << this->tratador
		<< setfill(' ') << setw(10) << this->tipo_temperatura
		<< setfill(' ') << setw(10) << this->tipo_pele
		<< setfill(' ') << setw(10) << this->material_eliminidado
		<< setfill(' ') << setw(10) << this->aquatico_terrestre
		<< setfill(' ') << setw(10) << this->registro_ibama
		<< setfill(' ') << setw(10) << this->territorio_brasileiro
		<< setfill(' ') << setw(10) << (this->extincao==ameacado ? "Risco de extincao" : "Nao corre risco de extincao")
		<< setfill(' ') << setw(6); 
	return o;
}
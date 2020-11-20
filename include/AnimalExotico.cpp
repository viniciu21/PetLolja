#include <iomanip>
#include<iostream>

using std::setfill;
using std::setw;
using std::cout;
using std::endl;

#include "Animal.hpp"
#include "AnimalSilvestre.hpp"
#include "AnimalExotico.hpp"

AnimalExotico::AnimalExotico(
	int          id,
	string       especie, 
	string       nome,
	string       genero,  
	Veterinario* veterinario, 
	Tratador*    tratador, 
	string       tipo_temperatura,
	string       tipo_pele, 
	string       tipo_fecundacao, 
	bool         troca_pele, 
	string       material_eliminidado,
	string       aquatico_terrestre,
	bool         registro_ibama,
	bool         territorio_brasileiro,
	enExtincao   extincao,
	string       pais_origem
	):
		AnimalSilvestre(
			id,
			especie, 
			nome,
			genero,  
			veterinario, 
			tratador, 
			tipo_temperatura,
			tipo_pele, 
			tipo_fecundacao, 
			troca_pele, 
			material_eliminidado,
			aquatico_terrestre,
			registro_ibama,
			territorio_brasileiro,
			extincao), pais_origem(pais_origem){}

AnimalExotico::~AnimalExotico(){}


// Getters

vector<AnimalSilvestre*> AnimalExotico::getExotico(){
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
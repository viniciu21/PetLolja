#include "Animal.hpp"
#include "animalSilvestre.hpp"

AnimalSilvestre::AnimalSilvestre(
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
	enExtincao   extincao
	):
		Animal(
		
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
			material_eliminidado
		),
		aquatico_terrestre(aquatico_terrestre),
		registro_ibama(registro_ibama),
		territorio_brasileiro(territorio_brasileiro),
		extincao(extincao){}

AnimalSilvestre::~AnimalSilvestre(){}


// Getters

string  AnimalSilvestre::getAquatico_terrestre(){
	return this->aquatico_terrestre;
}
bool    AnimalSilvestre::getRegistro_ibama(){
	return this->registro_ibama;
}
bool    AnimalSilvestre::getTerritorio_brasileiro(){
	return this->territorio_brasileiro;
}
enExtincao    AnimalSilvestre::getExtincao(){
	return this->extincao;
}

ostream& operator<< (ostream& o, AnimalSilvestre& as){
	return as.imprimeDados(o);
}
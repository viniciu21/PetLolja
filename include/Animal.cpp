#include "Animal.hpp"

Animal::Animal(
	int          id,
	string       especie, 
	string       nome, 
	string       genero, 
	string veterinario, 
	string    tratador, 
	string       tipo_temperatura, 
	string       tipo_pele, 
	string       tipo_fecundacao, 
	bool         troca_pele, 
	string       material_eliminidado
	):
		id(id), 
		especie(especie), 
		nome(nome), 
		genero(genero), 
		veterinario(veterinario), 
		tratador(tratador), 
		tipo_temperatura(tipo_temperatura), 
		tipo_pele(tipo_pele), 
		tipo_fecundacao(tipo_fecundacao),
		troca_pele(troca_pele), 
		material_eliminidado(material_eliminidado){}

Animal::~Animal(){}

// Getters
int          Animal::getId(){
	return this->id;
}

string       Animal::getEspecie(){
	return this->especie;
}

string       Animal::getNome(){
	return this->nome;
}

string       Animal::getGenero(){
	return this->genero;
}

string Animal::getVeterinario(){
	return this->veterinario;
}

string    Animal::getTratador(){
	return this->tratador;
}	

string       Animal::getTipo_temperatura(){
	return this->tipo_temperatura;
}

string       Animal::getTipo_pele(){
	return this->tipo_pele;
}

string       Animal::getTipo_fecundacao(){
	return this->tipo_fecundacao;
}

bool         Animal::getTroca_pele(){
	return this->troca_pele;
}

string       Animal::getMaterial_eliminidado(){
	return this->material_eliminidado;
}

//sobrecarga operador o
std::ostream& operator<<(std::ostream& o, Animal& a){
	return a.imprimeDados(o);
}
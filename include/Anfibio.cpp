#include "Anfibio.hpp"

Anfibio::Anfibio(
		int          id,
		string       especie, 
		string       nome,
		string 		 genero,  
		string veterinario, 
		string    tratador, 
		string       tipo_temperatura, 
		string       tipo_pele, 
		string       tipo_fecundacao, 
		bool         troca_pele, 
		string       material_eliminidado,
		string       habitat,
		bool         possui_ovos
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
			habitat(habitat), 
			possui_ovos(possui_ovos){}

Anfibio::~Anfibio(){}

ostream& operator<< (ostream& o, Anfibio& a){
	return a.imprimeDados(o);
}

string Anfibio::getHabitat(){
	return this->habitat;
}
bool Anfibio::getPossui_ovos(){
	return possui_ovos;
}

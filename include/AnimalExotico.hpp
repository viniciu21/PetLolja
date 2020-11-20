#ifndef __EXOTICO__
#define __EXOTICO__

#include<iostream>
#include<vector>
#include "Animal.hpp"
#include "AnimalSilvestre.hpp"

using namespace std;

class AnimalExotico: public AnimalSilvestre{

protected:
	string pais_origem;
	vector<AnimalSilvestre*> exotico;

public:

	AnimalExotico(
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
		string pais_origem
		);
	
	~AnimalExotico();
	

	// Getters
	string   getPais_origem();
	vector<AnimalSilvestre*> getExotico();

	ostream& imprimeDados(ostream& o) const;

};

#endif
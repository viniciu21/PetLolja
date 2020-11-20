#ifndef __NATIVO__
#define __NATIVO__

#include<iostream>
#include<vector>
#include "Animal.hpp"
#include "AnimalSilvestre.hpp"

using namespace std;

class AnimalNativo: public AnimalSilvestre{

protected:
	
	vector<AnimalSilvestre*> nativos;

public:

	AnimalNativo(
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
		);
	
	~AnimalNativo();
	

	// Getters
	vector<AnimalSilvestre*> getNativos();

	ostream& imprimeDados(ostream& o) const;

};

#endif
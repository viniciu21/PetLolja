#ifndef __ANFIBIOEXOTICO__
#define __ANFIBIOEXOTICO__

#include<iostream>
#include<vector>

#include "Anfibio.hpp"
#include "AnimalExotico.hpp"
#include "Animal.hpp"
using namespace std;

class AnfibioExotico: public Anfibio,  AnimalExotico{

protected:
	
	

public:

	AnfibioExotico(
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
		string       material_eliminidado,
		string       habitat,
		bool         possui_ovos,
		string       aquatico_terrestre,
		bool         registro_ibama,
		bool         territorio_brasileiro,
		enExtincao   extincao,
		string pais_origem
		);
	
	~AnfibioExotico();
	

	// Getters

	friend std::ostream& operator<<(std::ostream& os, AnfibioExotico& ae);
	ostream& imprimeDados(ostream& o) const;

};

#endif
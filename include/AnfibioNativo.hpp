#ifndef __ANFIBIONATIVO__
#define __ANFIBIONATIVO__

#include<iostream>
#include<vector>

#include "Anfibio.hpp"
#include "AnimalNativo.hpp"
#include "Animal.hpp"
using namespace std;

class AnfibioNativo: public Anfibio,  AnimalNativo{

protected:
	


public:

	AnfibioNativo(
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
		enExtincao   extincao
		);
	
	~AnfibioNativo();
	

	// Getters
	vector<AnfibioNativo*> getAnfibio_nativos();

	friend std::ostream& operator<<(std::ostream& os, AnfibioNativo& an);
	ostream& imprimeDados(ostream& o) const;

};

#endif
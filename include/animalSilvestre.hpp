#ifndef __SILVESTRE__
#define __SILVESTRE__

#include<iostream>
#include "Animal.hpp"

using namespace std;


enum enExtincao
{
	ameacado, 
	nao_ameacado
};

class AnimalSilvestre: public Animal{

protected:
	string aquatico_terrestre;
	bool   registro_ibama;
	bool   territorio_brasileiro;
	enExtincao   extincao;
	
public:

	AnimalSilvestre(
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
		enExtincao     extincao
		);
	
	~AnimalSilvestre();

	friend ostream& operator<< (ostream& o, AnimalSilvestre& as);
	virtual ostream& imprimeDados(ostream& o) const = 0;

	// Getters

	string   getAquatico_terrestre();
	bool     getRegistro_ibama();
	bool     getTerritorio_brasileiro();
	enExtincao getExtincao();

};

#endif
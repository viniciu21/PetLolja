#ifndef __NATIVO__
#define __NATIVO__

#include<iostream>
#include<vector>
#include "AnimalSilvestre.hpp"

using namespace std;

class AnimalNativo: public AnimalSilvestre{

protected:
	
	vector<AnimalNativo*> nativos;

public:

	AnimalNativo(
		string       aquatico_terrestre,
		bool         registro_ibama,
		bool         territorio_brasileiro,
		enExtincao   extincao
		);
	
	~AnimalNativo();
	

	// Getters
	vector<AnimalNativo*> getNativos();

	ostream& imprimeDados(ostream& o) const;

};

#endif
#ifndef __EXOTICO__
#define __EXOTICO__

#include<iostream>
#include<vector>
#include "AnimalSilvestre.hpp"

using namespace std;

class AnimalExotico: public AnimalSilvestre{

protected:
	string pais_origem;
	vector<AnimalExotico*> exotico;

public:

	AnimalExotico(
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
	vector<AnimalExotico*> getExotico();

	ostream& imprimeDados(ostream& o) const;

};

#endif
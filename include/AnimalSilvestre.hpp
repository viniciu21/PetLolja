#ifndef __SILVESTRE__
#define __SILVESTRE__

#include<iostream>

using namespace std;


enum enExtincao
{
	ameacado, 
	nao_ameacado
};

class AnimalSilvestre{

protected:
	string aquatico_terrestre;
	bool   registro_ibama;
	bool   territorio_brasileiro;
	enExtincao   extincao;
	
public:

	AnimalSilvestre(
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
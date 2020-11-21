#ifndef __Anfibio__
#define __Anfibio__

#include<iostream>
#include "Animal.hpp"

class Anfibio: public Animal{

protected:
	string habitat;
	bool possui_ovos;
	
public:

	Anfibio(
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
		bool         possui_ovos
		);

	~Anfibio();

	friend ostream& operator<< (ostream& o, Anfibio& a);
	virtual ostream& imprimeDados(ostream& o) const = 0;

	string getHabitat();
	bool getPossui_ovos();
	
};

#endif
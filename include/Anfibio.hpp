#ifndef __Anfibio__
#define __Anfibio__

#include<iostream>
#include "Animal.hpp"

class Anfibio: public Animal{

protected:
	
	
public:

	Anfibio(int id,string especie, string nome, Veterinario* veterinario, Tratador* tratador, string tipo_temperatura, string tipo_pele, string tipo_fecundacao, bool troca_pele, string material_eliminidado);
	~Anfibio();
	
};
#ifndef __PETFERA__
#define __PETFERA__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Anfibio.hpp"
#include "Reptil.hpp"
#include "AnfibioNativo.hpp"

class PetFera{
	vector<AnfibioNativo*> anfibio_nativos;
	
public:

	void menu();
	bool cadastrarAnimal();

};

#endif
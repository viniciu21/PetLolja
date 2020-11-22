#ifndef __Domestico__
#define __Domestico__

#include <iostream>

using namespace std;

class AnimalDomestico{

   protected:

   	string nome_animal;
   	string nome_dono;

   public:

    AnimalDomestico(string nome_animal, string nome_dono);

    ~AnimalDomestico();

    //getters
    string getNome_animal();
    string getNome_dono();
};

#endif

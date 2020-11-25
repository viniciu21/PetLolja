#ifndef __REPTIL__
#define __REPTIL__

#include <iostream>

#include "../include/Animal.hpp"
using std::string;
class Reptil : public Animal {
   private:
    virtual ostream& imprimeDados(ostream& o);
    
   public:
    Reptil(int id,
        string especie,
        string nome,
        string genero,
        familia classe,
        string veterinario,
        string tratador,
        string tipo_temperatura,
        string tipo_pele,
        string tipo_fecundacao,
        bool troca_pele,
        string material_eliminado
        );

    ~Reptil();

};

#endif

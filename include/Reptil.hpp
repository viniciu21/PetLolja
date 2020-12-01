#ifndef __REPTIL__
#define __REPTIL__

#include <iostream>

#include "../include/Animal.hpp"
using std::string;
class Reptil : public Animal {
   private:
    ostream& imprimeDados(ostream& o) const;

   public:
    Reptil(int id,
           string especie,
           string nome,
           t_genero genero,
           familia classe,
           std::shared_ptr<Funcionario> veterinario,
           std::shared_ptr<Funcionario> tratador,
           string tipo_temperatura,
           string tipo_pele,
           string tipo_fecundacao,
           bool troca_pele,
           string material_eliminidado);

    ~Reptil();
};

#endif

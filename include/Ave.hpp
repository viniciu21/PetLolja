#ifndef __AVE__
#define __AVE__

#include <iostream>

#include "../include/Animal.hpp"
using std::string;

class Ave : public Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;

   protected:
    string tamanhoDoBico;
    string envergaduraAsas;

   public:
    // Ave();

    Ave(int id,
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
        string material_eliminidado,
        string envergaduraAsas,
        string tamanhoDoBico);

    ~Ave();

    string getEnvergaduraAsas();
    string getTamanhoDoBico();
};

#endif

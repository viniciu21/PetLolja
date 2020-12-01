#ifndef __AVE__
#define __AVE__

#include <iostream>

#include "../include/Animal.hpp"
using std::string;

class Ave : public Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;
    // virtual istream& pegarDados(istream&);

   protected:
    string envergaduraAsas;
    string tamanhoDoBico;

   public:
    // Ave();

    Ave(int id,
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
        string material_eliminidado,
        string envergaduraAsas,
        string tamanhoDoBico);

    ~Ave();

    string getEnvergaduraAsas();
    string getTamanhoDoBico();

    void setEnvergaduraAsas(string asas);
    void setTamanhoDoBico(string bico);
};

#endif

#ifndef __REPTILNATIVO__
#define __REPTILNATIVO__

#include <iostream>

#include "../include/AnimalNativo.hpp"
#include "Reptil.hpp"

using std::string;

class ReptilNativo : public Reptil, AnimalNativo {
   private:
    virtual ostream &imprimeDados(ostream &o) const;

   public:
    ReptilNativo(int id,
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
                 string aquatico_terrestre,
                 bool registro_ibama,
                 bool territorio_brasileiro,
                 enExtincao extincao);

    ~ReptilNativo();
};

#endif

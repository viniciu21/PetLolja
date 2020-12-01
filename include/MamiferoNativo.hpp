#ifndef __MamiferoNativo__
#define __MamiferoNativo__

#include <iostream>

#include "../include/AnimalNativo.hpp"
#include "Mamifero.hpp"

using std::string;

class MamiferoNativo : public Mamifero, AnimalNativo {
   private:
    virtual ostream &imprimeDados(ostream &o) const;

   public:
    MamiferoNativo(int id,
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
                   bool tem_dentes,
                   pelos pelagem,
                   TipoDeGestacao tipo_gestacao,
                   string aquatico_terrestre,
                   bool registro_ibama,
                   bool territorio_brasileiro,
                   enExtincao extincao);

    ~MamiferoNativo();
};

#endif

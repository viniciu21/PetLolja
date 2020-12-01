#ifndef __REPTILEXOTICO__
#define __REPTILEXOTICO__
#include <iostream>

#include "../include/AnimalExotico.hpp"
#include "Reptil.hpp"

using std::string;

class ReptilExotico : public Reptil, AnimalExotico {
   private:
    virtual ostream &imprimeDados(ostream &o) const;

   public:
    ReptilExotico(int id,
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
                  enExtincao extincao,
                  string pais_origem);

    ~ReptilExotico();
};

#endif

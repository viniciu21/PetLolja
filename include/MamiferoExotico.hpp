#ifndef __MamiferoExotico__
#define __MamiferoExotico__

#include <iostream>

#include "../include/AnimalExotico.hpp"
#include "Mamifero.hpp"

using std::string;

class MamiferoExotico : public Mamifero, AnimalExotico {
   private:
    virtual ostream& imprimeDados(ostream& o) const;

   public:
    MamiferoExotico(int id,
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
                    enExtincao extincao,
                    string pais_origem);

    ~MamiferoExotico();
};

#endif

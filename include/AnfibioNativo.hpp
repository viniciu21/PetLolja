#ifndef __ANFIBIONATIVO__
#define __ANFIBIONATIVO__

#include <iostream>

#include "Anfibio.hpp"
#include "Animal.hpp"
#include "AnimalNativo.hpp"
using namespace std;

class AnfibioNativo : public Anfibio, AnimalNativo {
   private:
    ostream& imprimeDados(ostream& o) const;

   protected:
   public:
    AnfibioNativo(
        int id,
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
        string habitat,
        bool possui_ovos,
        string aquatico_terrestre,
        bool registro_ibama,
        bool territorio_brasileiro,
        enExtincao extincao);

    ~AnfibioNativo();

    // Getters
};

#endif

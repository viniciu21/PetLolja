#ifndef __ANFIBIOEXOTICO__
#define __ANFIBIOEXOTICO__

#include <iostream>
#include <vector>

#include "Anfibio.hpp"
#include "Animal.hpp"
#include "AnimalExotico.hpp"
using namespace std;

class AnfibioExotico : public Anfibio, AnimalExotico {
   private:
    ostream& imprimeDados(ostream& o) const;

   public:
    AnfibioExotico(
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
        enExtincao extincao,
        string pais_origem);

    ~AnfibioExotico();

    // Getters
};

#endif

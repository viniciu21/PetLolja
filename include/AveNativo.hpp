#ifndef __AVENATIVA__
#define __AVENATIVA__

#include "./AnimalNativo.hpp"
#include "./Ave.hpp"

class AveNativo : public Ave, AnimalNativo {
   private:
    ostream& imprimeDados(ostream& o) const;

   public:
    AveNativo(
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
        string tamanhoDoBico,
        string envergaduraAsas,
        string aquatico_terrestre,
        bool registro_ibama,
        bool territorio_brasileiro,
        enExtincao extincao);
    ~AveNativo();
};

#endif

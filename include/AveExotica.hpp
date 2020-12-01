#ifndef __AveExotica__
#define __AveExotica__

#include "./AnimalExotico.hpp"
#include "./Ave.hpp"

class AveExotica : public Ave, AnimalExotico {
   private:
    ostream& imprimeDados(ostream& o) const;

   public:
    AveExotica();

    AveExotica(
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
        enExtincao extincao,
        string pais_origem);

    ~AveExotica();
};

#endif

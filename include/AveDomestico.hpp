#ifndef __AVEDOMESTICA__
#define __AVEDOMESTICA__

#include "AnimalDomestico.hpp"
#include "Ave.hpp"

class AveDomestico : public Ave, AnimalDomestico {
   private:
    ostream& imprimeDados(ostream& o) const;

   public:
    AveDomestico(int id,
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
                 string material_eliminado,
                 string tamanhoDoBico,
                 string envergaduraAsas,
                 string nome_animal,
                 string nome_dono);
    ~AveDomestico();
};

#endif

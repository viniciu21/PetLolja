#ifndef __Mamifero__
#define __Mamifero__

#include <iostream>

#include "../include/Animal.hpp"
using std::string;

enum pelos {
    ausente,
    reduzido,
    normal
};

enum TipoDeMamifero {
    cursorial,
    saltador,
    plantigrado,
    fossorial,
    arboricola,
    planador,
    aquatico,
    voador
};

enum TipoDeGestacao {
    marsupial,
    placentario
};
class Mamifero : public Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;

   protected:
    bool tem_dentes;
    pelos pelagem;
    TipoDeGestacao tipo_gestacao;
    TipoDeMamifero tipo_mamifero;

   public:
    Mamifero(int id,
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
             TipoDeMamifero tipo_mamifero);

    ~Mamifero();

    bool getDentes();
    pelos getPelagem();
    TipoDeGestacao getTipoGestacao();
    TipoDeMamifero getTipoMamifero();

    void setDentes(bool dentes);
    void setPelagem(pelos pelos_);
    void setTipoGestacao(TipoDeGestacao tipoDeGestacao_);
    void setTipoMamifero(TipoDeMamifero tipoDeMamifero_);
};

#endif

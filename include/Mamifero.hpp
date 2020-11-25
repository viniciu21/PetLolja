#ifndef __Mamifero__
#define __Mamifero__

#include <iostream>

#include "../include/Animal.hpp"
using std::string;

enum pelos{
    ausente,
    reduzido,
    normal
};

enum TipoDeMamifero{
    cursorial,
    saltador,
    plantigrado,
    fossorial,
    arboricola,
    planador,
    aquatico,
    voador
};

enum TipoDeGestacao{
    marsupial,
    placentario
};
class Mamifero : public Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;


   protected:

   public:

    Mamifero(int id,
        string especie,
        string nome,
        string genero,
        familia classe,
        string veterinario,
        string tratador,
        string tipo_temperatura,
        string tipo_pele,
        string tipo_fecundacao,
        bool troca_pele,
        string material_eliminado,
        bool tem_dentes,
        pelos pelagem,
        TipoDeGestacao tipo_gestacao,
        TipoDeMamifero tipo_mamifero
        );

    ~Mamifero();

};

#endif

#ifndef __Anfibio__
#define __Anfibio__

#include <iostream>

#include "Animal.hpp"

class Anfibio : public Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;

   protected:
    string habitat;
    bool possui_ovos;

   public:
    Anfibio(
        int id,
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
        string material_eliminidado,
        string habitat,
        bool possui_ovos);

    ~Anfibio();

    string getHabitat();
    bool getPossui_ovos();
};

#endif

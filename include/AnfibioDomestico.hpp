#ifndef __ANFIBIODOMESTICO__
#define __ANFIBIODOMESTICO__

#include <iostream>

#include "Anfibio.hpp"
#include "Animal.hpp"
#include "AnimalDomestico.hpp"

using namespace std;

class AnfibioDomestico : public Anfibio, AnimalDomestico {
    
   private:
    ostream& imprimeDados(ostream& o) const;

   protected:

   public:
    AnfibioDomestico(
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
        bool possui_ovos,
        string nome_animal,
        string nome_dono);

    ~AnfibioDomestico();

    // Getters
};

#endif

#ifndef __REPTILDOMESTICO__
#define __REPTILDOMESTICO__

#include <iostream>

#include "../include/AnimalDomestico.hpp"
#include "Reptil.hpp"

using std::string;

class ReptilDomestico : public Reptil, AnimalDomestico
{
private:
    virtual ostream &imprimeDados(ostream &o) const;

public:
    ReptilDomestico(int id,
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
                    string nome_animal,
                    string nome_dono);

    ~ReptilDomestico();
};

#endif

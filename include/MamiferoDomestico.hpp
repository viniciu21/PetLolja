#ifndef __MamiferoDomestico__
#define __MamiferoDomestico__

#include <iostream>

#include "../include/AnimalDomestico.hpp"
#include "Mamifero.hpp"

using std::string;

class MamiferoDomestico : public Mamifero, AnimalDomestico
{
private:
    virtual ostream &imprimeDados(ostream & o) const;

public:
    MamiferoDomestico(int id,
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
                      TipoDeMamifero tipo_mamifero,
                      string nome_animal,
                      string nome_dono);

    ~MamiferoDomestico();
};

#endif

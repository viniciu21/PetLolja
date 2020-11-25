#ifndef __MamiferoDomestico__
#define __MamiferoDomestico__

#include <iostream>

#include "AnimalDomestico.hpp"
#include "Mamifero.hpp"
class MamiferoDomestico : public Mamifero, AnimalDomestico
{
private:
    ostream &imprimeDados(ostream & o) const;

public:
    MamiferoDomestico(int id,
        string especie,
        string nome,
        t_genero genero,
        familia classe,
        Funcionario* veterinario,
        Funcionario* tratador,
        string tipo_temperatura,
        string tipo_pele,
        string tipo_fecundacao,
        bool troca_pele,
        string material_eliminidado,
        bool tem_dentes,
        pelos pelagem,
        TipoDeGestacao tipo_gestacao,
        TipoDeMamifero tipo_mamifero,
                      string nome_animal,
                      string nome_dono);

    ~MamiferoDomestico();
};

#endif

#include "../include/Mamifero.hpp"

#include <iostream>

using std::string;

Mamifero::Mamifero(
    int id,
    string especie,
    string nome,
    t_genero genero,
    familia classe,
    Funcionario *veterinario,
    Funcionario *tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado,
    bool tem_dentes,
    pelos pelagem,
    TipoDeGestacao tipo_gestacao,
    TipoDeMamifero tipo_mamifero) : Animal(id,
                                           especie,
                                           nome,
                                           genero,
                                           classe,
                                           veterinario,
                                           tratador,
                                           tipo_temperatura,
                                           tipo_pele,
                                           tipo_fecundacao,
                                           troca_pele,
                                           material_eliminidado),
                                    tem_dentes(tem_dentes),
                                    pelagem(pelagem),
                                    tipo_gestacao(tipo_gestacao),
                                    tipo_mamifero(tipo_mamifero){};

bool Mamifero::getDentes() {
    return this->tem_dentes;
};

pelos Mamifero::getPelagem() {
    return this->pelagem;
};

TipoDeGestacao Mamifero::getTipoGestacao() {
    return this->tipo_gestacao;
}

TipoDeMamifero Mamifero::getTipoMamifero() {
    return this->tipo_mamifero;
}

ostream &Mamifero::imprimeDados(ostream &o) const {
    return o;
}

Mamifero::~Mamifero() {}

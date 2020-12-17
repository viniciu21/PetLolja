#include "Mamifero.hpp"

#include <iostream>

using std::string;

Mamifero::Mamifero(
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
    bool tem_dentes,
    pelos pelagem,
    TipoDeGestacao tipo_gestacao) : Animal(id,
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
                                    tipo_gestacao(tipo_gestacao){};

bool Mamifero::getDentes() {
    return this->tem_dentes;
};

void Mamifero::setDentes(bool dentes) {
    this->tem_dentes = dentes;
};

pelos Mamifero::getPelagem() {
    return this->pelagem;
};
void Mamifero::setPelagem(pelos pelos_) {
    this->pelagem = pelos_;
};

TipoDeGestacao Mamifero::getTipoGestacao() {
    return this->tipo_gestacao;
}

void Mamifero::setTipoGestacao(TipoDeGestacao tipoDeGestacao_) {
    this->tipo_gestacao = tipoDeGestacao_;
}

ostream &Mamifero::imprimeDados(ostream &o) const {
    return o;
}

Mamifero::~Mamifero() {}

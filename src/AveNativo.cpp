#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "../include/AveNativo.hpp"

AveNativo::AveNativo(
    int id,
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
    string tamanhoDoBico,
    string envergaduraAsas,
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao) : Ave(id,
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
                               material_eliminidado,
                               tamanhoDoBico,
                               envergaduraAsas),
                           AnimalNativo(
                               aquatico_terrestre,
                               registro_ibama,
                               territorio_brasileiro,
                               extincao) {}

AveNativo::~AveNativo() {}

// Getters

ostream& AveNativo::imprimeDados(ostream& o) const {
     o << std::endl
     
        << "============== Ave Nativo ============" << std::endl
        << "ID                    | " << this->id << std::endl
        << "Classe                | Anfibio" << std::endl
        << "Nome                  | " << this->nome << std::endl
        << "Nome Cientifico       | " << this->especie << std::endl
        << "Sexo                  | " << (this->genero==F ? "Femea" : "Macho") << std::endl 
        << "Material Eleiminado   | " << this->material_eliminidado << std::endl
        << "Veterinario           | " << "" << std::endl
        << "Tratador              | " << "" << std::endl
        << "Aquatico ou Terrestre | " << this->aquatico_terrestre << std::endl
        << "Registro Ibama        | " << this->registro_ibama << std::endl
        << "Territorio Brasileiro | " << this->territorio_brasileiro << std::endl
        << "Ameacado de Extinsao  | " << (this->extincao == ameacado ? "Risco de extincao" : "Nao corre risco de extincao") << std::endl
        << "Tamanho do bico       | " << this->tamanhoDoBico << std::endl
        << "Envergadura           | " << this->envergaduraAsas << std::endl;
    
    return o;
}

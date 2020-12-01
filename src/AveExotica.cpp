#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "../include/AnimalExotico.hpp"
#include "../include/AveExotica.hpp"

AveExotica::AveExotica(
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
    string tamanhoDoBico,
    string envergaduraAsas,
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao,
    string pais_origem) : Ave(id,
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
                          AnimalExotico(aquatico_terrestre,
                                        registro_ibama,
                                        territorio_brasileiro,
                                        extincao,
                                        pais_origem){};

AveExotica::~AveExotica() {
    cout << "Animal removido com sucesso" << endl;
};

ostream& AveExotica::imprimeDados(ostream& o) const {
    o << std::endl
      << "============== Ave Exotico ============" << std::endl
      << "ID                    | " << this->id << std::endl
      << "Classe                | Anfibio" << std::endl
      << "Nome                  | " << this->nome << std::endl
      << "Nome Cientifico       | " << this->especie << std::endl
      << "Sexo                  | " << (this->genero == F ? "Femea" : "Macho") << std::endl
      << "Material Eleiminado   | " << this->material_eliminidado << std::endl
      << "Aquatico ou Terrestre | " << this->aquatico_terrestre << std::endl
      << "Registro Ibama        | " << this->registro_ibama << std::endl
      << "Territorio Brasileiro | " << this->territorio_brasileiro << std::endl
      << "Ameacado de Extinsao  | " << (this->extincao == ameacado ? "Risco de extincao" : "Nao corre risco de extincao") << std::endl
      << "Pais Origem           | " << this->pais_origem << std::endl
      << "Tamanho do bico       | " << this->tamanhoDoBico << std::endl
      << "Envergadura           | " << this->envergaduraAsas << std::endl;

    return o;
}

#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "AveNativo.hpp"

AveNativo::AveNativo(
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

AveNativo::~AveNativo() {
    cout << "Animal removido com sucesso" << endl;
}

// Getters

ostream& AveNativo::imprimeDados(ostream& o) const {
    o << std::endl

      << "============== Ave_Nativo ==============" << std::endl
     	<< "ID                    | " << this->id << std::endl
      << "Classe                | Ave" << std::endl
      << "Nome                  | " << this->nome << std::endl
      << "Nome Cientifico       | " << this->especie << std::endl
      << "Sexo                  | " << (this->genero == F ? "Femea" : "Macho") << std::endl
      << "Temperatura           | " << this->tipo_temperatura << std::endl
      << "Pele                  | " << this->tipo_pele << std::endl
      << "Fecundacao            | " << this->tipo_fecundacao << std::endl
      << "Troca de Pele         | " << (this->troca_pele == true ? "sim" : "nao") << std::endl
      << "Material Eliminado    | " << this->material_eliminidado << std::endl
      << "Aquatico/terrestre     | " << this->aquatico_terrestre << std::endl
      << "Registro Ibama        | " << this->registro_ibama << std::endl
      << "Territorio Brasileiro | " << this->territorio_brasileiro << std::endl
      << "Ameacado Extinsao     | " << (this->extincao == ameacado ? "Ameacado" : "Nao_Ameacado") << std::endl
      << "Tamanho bico          | " << this->tamanhoDoBico << std::endl
      << "Envergadura           | " << this->envergaduraAsas << std::endl<< ".";

    return o;
}

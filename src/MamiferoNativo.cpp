#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "MamiferoNativo.hpp"

MamiferoNativo::MamiferoNativo(
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
    TipoDeGestacao tipo_gestacao,
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao) : Mamifero(id,
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
                                    tem_dentes,
                                    pelagem,
                                    tipo_gestacao),
                           AnimalNativo(
                               aquatico_terrestre,
                               registro_ibama,
                               territorio_brasileiro,
                               extincao){};

MamiferoNativo::~MamiferoNativo() {}

ostream &MamiferoNativo::imprimeDados(ostream &o) const {
    o << std::endl
      << "============== Mamifero_Nativo ==============" << std::endl
      << "ID                    | " << this->id << std::endl
      << "Classe                | Mamifero" << std::endl
      << "Nome                  | " << this->nome << std::endl
      << "Nome Cientifico       | " << this->especie << std::endl
      << "Sexo                  | " << (this->genero == F ? "Femea" : "Macho") << std::endl
      << "Temperatura           | " << this->tipo_temperatura << std::endl
      << "Pele                  | " << this->tipo_pele << std::endl
      << "Fecundacao            | " << this->tipo_fecundacao << std::endl
      << "Troca de Pele         | " << (this->troca_pele == true ? "sim" : "nao") << std::endl
      << "Material Eliminado    | " << this->material_eliminidado << std::endl
      << "Aquatico/Terrestre    | " << this->aquatico_terrestre << std::endl
      << "Registro Ibama        | " << this->registro_ibama << std::endl
      << "Territorio Brasileiro | " << this->territorio_brasileiro << std::endl
      << "Ameacado Extinsao     | " << (this->extincao == ameacado ? "Ameacado" : "Nao_Ameacado") << std::endl
      << "Dentes                | " << (this->tem_dentes ? "Possui dentes" : "Não possui dentes") << std::endl
      << "Pelagem               | " << (this->pelagem == 0 ? "Ausente" : this->pelagem == 1 ? "Reduzido" : "Normal") << std::endl
      << "Tipo gestacao         | " << (this->tipo_gestacao == 0 ? "Marsupial" : "Placentario") << std::endl<< ".";

    return o;
}

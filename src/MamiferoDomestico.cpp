#include "MamiferoDomestico.hpp"

#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

MamiferoDomestico::MamiferoDomestico(
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
    string nome_animal,
    string nome_dono) : Mamifero(id,
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
                        AnimalDomestico(
                            nome_animal,
                            nome_dono) {}

MamiferoDomestico::~MamiferoDomestico() {}

ostream &MamiferoDomestico::imprimeDados(ostream &o) const {
    o << std::endl
      << "============== Mamifero_Domestico ==============" << std::endl
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
      << "Nome Batismo          |  " << this->nome_animal << std::endl
      << "Nome dono             | " << this->nome_dono << std::endl
      << "Dentes                | " << (this->tem_dentes ? "Possui dentes" : "Não possui dentes") << std::endl
      << "Pelagem               | " << (this->pelagem == 0 ? "Ausente" : this->pelagem == 1 ? "Reduzido" : "Normal") << std::endl
      << "Tipo gestacao         | " << (this->tipo_gestacao == 0 ? "Marsupial" : "Placentario") << std::endl<< ".";

    return o;
}

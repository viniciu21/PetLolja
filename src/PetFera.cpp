#include "../include/PetFera.hpp"

#include <sstream>
#include <string>

#include "../include/AnfibioDomestico.hpp"
#include "../include/AnfibioExotico.hpp"
#include "../include/AnfibioNativo.hpp"
#include "../include/AveDomestico.hpp"
#include "../include/AveExotica.hpp"
#include "../include/AveNativo.hpp"
#include "../include/FuncionarioTratador.hpp"
#include "../include/FuncionarioVeterinario.hpp"
#include "../include/MamiferoDomestico.hpp"
#include "../include/MamiferoExotico.hpp"
#include "../include/MamiferoNativo.hpp"
#include "../include/Reptil.hpp"
#include "../include/ReptilDomestico.hpp"
#include "../include/ReptilExotico.hpp"
#include "../include/ReptilNativo.hpp"

Petfera::Petfera() {}
Petfera::~Petfera() {
}

void Petfera::inicio() {
    int escolha = 0;
    PetferaMenu(escolha);

    while (escolha != 0) {
        PetferaMenu(escolha);
    }
}

void Petfera::PetferaMenu(int& escolha) {
    cout << "# Bem Vindo ao PetFera  # "
         << "\n"
         << "# Temos as seguintes opções : # "
         << "\n"
         << "    1 -> Adicionar animal "
         << "\n"
         << "    2 -> Adicionar funcionario "
         << "\n"
         << "    3 -> Remover animal "
         << "\n"
         << "    4 -> Remover funcionario "
         << "\n"
         << "    5 -> Atualizar dados de um animal "
         << "\n"
         << "    6 -> Listar animais por funcionario "
         << "\n"
         << "    7 -> Listar animais por classe "
         << "\n"
         << "    8 -> Listar todos funcionarios "
         << "\n"
         << "    9 -> Listar todos animais "
         << "\n"
         << "    0 -> Sair " << std::endl;

    cout << "Escolha uma opção"
         << "\n";
    cin >> escolha;

    switch (escolha) {
        case 0:
            cout << "Muito obrigado e volte sempre!!"
                 << "\n";
            break;
        case 1:
            cout << "Vamos la cadastrar um animal"
                 << "\n";

            cadastrarAnimal();
            break;
        case 2:
            cout << "Vamos la cadastrar um funcionario"
                 << "\n";
            cadastrarFuncionario();
            break;
        case 3:
            cout << "Vamos la cadastrar um animal"
                 << "\n";
            break;
        case 4:
            cout << "Vamos la cadastrar um animal"
                 << "\n";
            break;
        case 5:
            cout << "Vamos la cadastrar um animal"
                 << "\n";
            break;
        case 6:
            cout << "Vamos la cadastrar um animal"
                 << "\n";
            break;
        case 7:
            cout << "Vamos la cadastrar um animal"
                 << "\n";
            break;
        case 8:
            cout << "Aqui estão todo os Funcionarios na Petfera"
                 << "\n";
            for (auto& novo : this->funcionarioStore) {
                cout << (*novo) << endl;
            }

            break;
        case 9:
            cout << "Aqui estão todo os animais na Petfera"
                 << "\n";

            for (auto& novo : this->animalStore) {
                cout << (*novo) << endl;
            }
            break;
        default:
            cout << "\033[1;33m"
                 << "Não temos essa opção, Escolha de 0-9"
                 << "\033[0m"
                 << "\n";
            break;
    }
}

/** Métodos criados para ler dados do usuário.
*  	Esses métodos invocam os métodos internos
*	que irão efetivar as operações.
**/

Funcionario* Petfera::pegarFuncionario() {}

void Petfera::cadastrarAveDomestico() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "Vinicius", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "Mathias", "cpf", Veterinario, "asd", "masd", true);

    string especie = leString("Digite o nome cientifico para o animal \n");
    string nome = leString("Digite o nome popular para o animal \n");
    t_genero genero = leGenero("Digite F para femea e M para macho \n");
    string tipo_temperatura = leString("Digite o tipo de temperatura do animal \n");
    string tipo_pele = leString("Digite o tipo de pele do animal \n");
    string tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
    bool troca_pele = leBool("Digite S para se esse animal troca de pele e N se ele não troca \n");
    string material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
    string envergadura = leString("Digite a envergadura do animal \n");
    string tamanhoDoBico = leString("Digite o tamanho do bico do animal \n");
    string nome_animal = leString("Digite um nome para o animal \n");
    string nome_dono = leString("Digite um nome do dono para o animal \n");

    Animal* criado = new AveDomestico(this->animalStore.size(), especie, nome, genero, Aves, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tamanhoDoBico, envergadura, nome_animal, nome_dono);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarAveExotica() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "nome", "cpf", Veterinario, "asd", "masd", true);

    string especie = leString("Digite o nome cientifico para o animal \n");
    string nome = leString("Digite o nome popular para o animal \n");
    t_genero genero = leGenero("Digite F para femea e M para macho \n");
    string tipo_temperatura = leString("Digite o tipo de temperatura do animal \n");
    string tipo_pele = leString("Digite o tipo de pele do animal \n");
    string tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
    string material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
    string envergadura = leString("Digite a envergadura do animal \n");
    string tamanhoDoBico = leString("Digite o tamanho do bico do animal \n");
    bool troca_pele = leBool("Digite S se o animal troca de pele ou N se o animal nao troca de pele \n");
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado");

    Animal* criado = new AveExotica(this->animalStore.size(), especie, nome, genero, Aves, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tamanhoDoBico, envergadura, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao, pais_origem);

    adicionarAnimal(criado);
}

void Petfera::cadastrarAveNativa() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "nome", "cpf", Veterinario, "asd", "masd", true);

    string especie = leString("Digite o nome cientifico para o animal \n");
    string nome = leString("Digite o nome popular para o animal \n");
    t_genero genero = leGenero("Digite F para femea e M para macho \n");
    string tipo_temperatura = leString("Digite o tipo de temperatura do animal \n");
    string tipo_pele = leString("Digite o tipo de pele do animal \n");
    string tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
    string material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
    string envergadura = leString("Digite a envergadura do animal \n");
    string tamanhoDoBico = leString("Digite o tamanho do bico do animal \n");
    bool troca_pele = leBool("Digite S se o animal troca de pele ou N se o animal nao troca de pele \n");
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;

    Animal* criado = new AveNativo(this->animalStore.size(), especie, nome, genero, Aves, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tamanhoDoBico, envergadura, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarAnfibioDomestico() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "nome", "cpf", Veterinario, "asd", "masd", true);

    string especie = leString("Digite o nome cientifico para o animal \n");
    string nome = leString("Digite o nome popular para o animal \n");
    t_genero genero = leGenero("Digite F para femea e M para macho \n");
    string tipo_temperatura = leString("Digite o tipo de temperatura do animal \n");
    string tipo_pele = leString("Digite o tipo de pele do animal \n");
    string tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
    string material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
    string habitat = leString("Digite o tipo de habitat do animal \n");
    bool troca_pele = leBool("Digite S se o animal troca de pele ou N se o animal nao troca de pele \n");
    bool possui_ovos = leBool("Digite S se o animal possui ovos e N se o animal nao possui ovos \n");
    string nome_animal = leString("Digite um nome para o animal \n");
    string nome_dono = leString("Digite um nome do dono para o animal \n");

    Animal* criado = new AnfibioDomestico(this->animalStore.size(), especie, nome, genero, Anfibios, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, habitat, possui_ovos, nome_animal, nome_dono);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarAnfibioExotico() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "nome", "cpf", Veterinario, "asd", "masd", true);

    string especie = leString("Digite o nome cientifico para o animal \n");
    string nome = leString("Digite o nome popular para o animal \n");
    t_genero genero = leGenero("Digite F para femea e M para macho \n");
    string tipo_temperatura = leString("Digite o tipo de temperatura do animal \n");
    string tipo_pele = leString("Digite o tipo de pele do animal \n");
    string tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
    string material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
    string habitat = leString("Digite o tipo de habitat do animal \n");
    bool troca_pele = leBool("Digite S se o animal troca de pele ou N se o animal nao troca de pele \n");
    bool possui_ovos = leBool("Digite S se o animal possui ovos e N se o animal nao possui ovos \n");
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado");

    Animal* criado = new AnfibioExotico(this->animalStore.size(), especie, nome, genero, Anfibios, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, habitat, possui_ovos, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao, pais_origem);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarAnfibioNativo() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "nome", "cpf", Veterinario, "asd", "masd", true);

    string especie = leString("Digite o nome cientifico para o animal \n");
    string nome = leString("Digite o nome popular para o animal \n");
    t_genero genero = leGenero("Digite F para femea e M para macho \n");
    string tipo_temperatura = leString("Digite o tipo de temperatura do animal \n");
    string tipo_pele = leString("Digite o tipo de pele do animal \n");
    string tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
    string material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
    string habitat = leString("Digite o tipo de habitat do animal \n");
    bool troca_pele = leBool("Digite S se o animal troca de pele ou N se o animal nao troca de pele \n");
    bool possui_ovos = leBool("Digite S se o animal possui ovos e N se o animal nao possui ovos \n");
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado");

    Animal* criado = new AnfibioNativo(this->animalStore.size(), especie, nome, genero, Anfibios, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, habitat, possui_ovos, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarAnimal() {
    short escolhaTipo;

    cout << "Opção Escolhida: Animal" << endl;
    cout << "Escolha abaixo o tipo de animal para cadastro: " << endl;
    cout << " 1 - Cadastrar Anfibio" << endl;
    cout << " 2 - Cadastrar Mamifero" << endl;
    cout << " 3 - Cadastrar Ave" << endl;
    cout << " 4 - Cadastrar Reptil" << endl;

    cin >> escolhaTipo;

    switch (escolhaTipo) {
        case 1:
            cout << "cadastrando Anfibio"
                 << "\n";
            cadastrarAnfibio();
            break;
        case 2:
            cout << "cadastrando Mamifero"
                 << "\n";
            break;
        case 3:
            cout << "cadastrando Ave"
                 << "\n";
            cadastrarAve();
            break;
        case 4:
            cout << "cadastrando Reptil"
                 << "\n";
            break;

        default:
            cout << "Opção Invalida, retornando..." << endl;
            break;
    }
}

void Petfera::cadastrarAnfibio() {
    short escolhaSilvestre;

    cout << "Opcaoo Escolhida: Anfibio" << endl;
    cout << "Escolha abaixo o tipo de Anfibio para cadastro: " << endl;
    cout << " 1 - Cadastrar Anfibio Domestico" << endl;
    cout << " 2 - Cadastrar Anfibio Exotico" << endl;
    cout << " 3 - Cadastrar Anfibio Nativo" << endl;

    cin >> escolhaSilvestre;

    switch (escolhaSilvestre) {
        case 1:
            cout << "Salvando Anfibio Domestico"
                 << "\n";
            cadastrarAnfibioDomestico();
            break;
        case 2:
            cout << "Salvando Anfibio Exotico"
                 << "\n";
            cadastrarAnfibioExotico();
            break;
        case 3:
            cout << "Salvando Anfibio Nativo"
                 << "\n";
            cadastrarAnfibioNativo();
            break;
        default:
            cout << "Opção inválida, retornando..."
                 << "\n";
            break;
    }

}  // Interface com o usuário
void Petfera::cadastrarAve() {
    short escolhaSilvestre;

    cout << "Opcaoo Escolhida: Ave" << endl;
    cout << "Escolha abaixo o tipo de Ave para cadastro: " << endl;
    cout << " 1 - Cadastrar Ave Domestico" << endl;
    cout << " 2 - Cadastrar Ave Exotico" << endl;
    cout << " 3 - Cadastrar Ave Nativo" << endl;

    cin >> escolhaSilvestre;

    switch (escolhaSilvestre) {
        case 1:
            cout << "Salvando Ave Domestico"
                 << "\n";
            cadastrarAveDomestico();
            break;
        case 2:
            cout << "Salvando Ave Exotico"
                 << "\n";
            cadastrarAveExotica();
            break;
        case 3:
            cout << "Salvando Ave Nativo"
                 << "\n";
            cadastrarAveNativa();
            break;
        default:
            cout << "Opção inválida, retornando..."
                 << "\n";
            break;
    }
}  // Interface com o usuário
void Petfera::cadastrarFuncionario() {
    short escolha;

    cout << "Opção Escolhida: Cadastrar Funcionário" << endl;
    cout << "Escolha abaixo o tipo de funcionario para cadastro: " << endl;
    cout << " 1 - Funcionario Tratador" << endl;
    cout << " 2 - Funcionario Veterinario" << endl;

    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Vamos cadastrar um Funcionario Tratador" << endl;
            cadastrarTratador();
            break;
        case 2:
            cout << "Vamos cadastrar um Funcionario Tratador" << endl;
            cadastrarVeterinario();
    }

}  // Interface com o usuário
void Petfera::cadastrarVeterinario() {
    string nome = leString("Digite o nome do Funcionario \n");
    string cpf = leString("Digite o cpf do Funcionario \n");
    tipoFunca classificacao = Veterinario;
    string celular = leString("Digite o celular do Funcionário \n");
    string email = leString("Digite o emil do Funcionário \n");
    bool inscritoCRMV = leBool("Digite S para se o funcionario esta inscrito no CRMV e N para se não está \n");

    Funcionario* novo = new FuncionarioVeterinario(this->funcionarioStore.size(), nome, cpf, classificacao, celular, email, inscritoCRMV);

    adicionarFuncionario(novo);
}  // Interface com o usuário
void Petfera::cadastrarTratador() {
    string nome = leString("Digite o nome do Funcionario \n");
    string cpf = leString("Digite o cpf do Funcionario \n");
    tipoFunca classificacao = Tratador;
    string celular = leString("Digite o celular do Funcionário \n");
    string email = leString("Digite o emil do Funcionário \n");
    nivelDeSeguranca seguranca = Verde;

    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), nome, cpf, classificacao, celular, email, seguranca);

    adicionarFuncionario(novo);
}  // Interface com o usuário

/*
 * Métodos internos para realizar as operações.
 */
bool Petfera::adicionarAnimal(Animal* novo_animal) {
    cout << "Salvando Animal"
         << "\n";
    this->animalStore.push_back(novo_animal);
    return true;
}

bool Petfera::adicionarFuncionario(Funcionario* novo_funcionario) {
    cout << "Salvando funcionario"
         << "\n";
    funcionarioStore.push_back(novo_funcionario);
    return true;
}

string Petfera::leString(string str_prompt) {
    string var;
    cout << str_prompt;
    cin >> var;
    // getline(cin, var);
    return var;
}

t_genero Petfera::leGenero(string str_prompt) {
    string genero_string;
    t_genero genero;

    do {
        cout << str_prompt;
        cin >> genero_string;

        if (genero_string == "F" || genero_string == "f") {
            genero = F;
            genero_string = "F";
            break;

        } else if (genero_string == "M" || genero_string == "m") {
            genero = M;
            genero_string = "M";
            break;
        }

    } while (genero_string != "F" || genero_string != "M");

    return genero;
}

bool Petfera::leBool(string str_prompt) {
    string resposta;
    do {
        cout << str_prompt;
        cin >> resposta;
    } while ((resposta != "S" && resposta != "s") && (resposta != "N" && resposta != "n"));
    if (resposta == "S" || resposta == "s") {
        return true;
    } else {
        return false;
    }
}

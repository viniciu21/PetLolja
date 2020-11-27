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
#include "../include/ReptilDomestico.hpp"
#include "../include/ReptilExotico.hpp"
#include "../include/ReptilNativo.hpp"

Petfera::Petfera() {
    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), "Vinicius", "cpf", Tratador, "asd", "masd", Verde);
    this->adicionarFuncionario(novo);
    Funcionario* novo2 = new FuncionarioVeterinario(this->funcionarioStore.size(), "Mathias", "cpf", Veterinario, "asd", "masd", true);
    this->adicionarFuncionario(novo2);
}
Petfera::~Petfera() {
}

void Petfera::inicio() {
    int escolha = 0;
    PetferaMenu(escolha);

    while (escolha != 11) {
        PetferaMenu(escolha);
    }
}

void Petfera::PetferaMenu(int& escolha) {
    string escolha_str;

    cout << "\n\n# Bem Vindo ao PetFera  # \n"
         << "\n"
         << "# Temos as seguintes opcaos : # "
         << "\n\n"
         << "    1 -> Adicionar animal "
         << "\n"
         << "    2 -> Adicionar funcionario "
         << "\n"
         << "    3 -> Remover animal "
         << "\n"
         << "    4 -> Remover funcionario "
         << "\n"
         << "    5 -> Atualizar dados de um animal"
         << "\n"
         << "    6 -> Listar animais por funcionario "
         << "\n"
         << "    7 -> Listar animais por classe "
         << "\n"
         << "    8 -> Listar todos funcionarios "
         << "\n"
         << "    9 -> Atualizar dados de um funcionario"
         << "\n"
         << "    10 -> Listar todos animais "
         << "\n"
         << "    11 -> Sair " << std::endl;

    cout << "Escolha uma Opcao"
         << "\n";

    cin >> escolha_str;
    stringstream ss;
    ss << escolha_str;
    ss >> escolha;

    switch (escolha) {
        case 11:
            cout << "\033[1;33m"
                 << "Muito obrigado e volte sempre!!"
                 << "\033[0m"
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
            cout << "Vamos la remover um animal"
                 << "\n";

            removerAnimal();
            break;
        case 4:
            cout << "Vamos la remover um funcionario"
                 << "\n";
            removerFuncionario();
            break;
        case 5:
            cout << "Vamos la atualizar os dados"
                 << "\n";

            atualizar_dados_animal();
            break;
        case 6:
            cout << "Vamos la listar animais por funcionário"
                 << "\n";
            listarAnimaisPorFunca();
            break;
        case 7:
            cout << "Vamos la cadastrar um animal"
                 << "\n";

            listarAnimaisPorClasse();
            break;
        case 8:
            cout << "Aqui estao todo os Funcionarios na Petfera"
                 << "\n";

            listarTodosFuncaionarios();

            break;
        case 9:
            cout << "Vamos la atualizar os dados"
                 << "\n";

            atualizar_dados_funcionario();
            break;
        case 10:
            cout << "Esta e a lista de todos os animais da Petfera"
                 << "\n";
            listarTodosAnimais();
            break;
        default:
            cout << "\033[1;33m"
                 << "Nao temos essa Opcao, Escolha de 1-11"
                 << "\033[0m"
                 << "\n";
            break;
    }
}

/** Metodos criados para ler dados do usuário.
*  	Esses metodos invocam os metodos internos
*	que irão efetivar as operações.
**/

Funcionario* Petfera::pegarVeterinario() {
    Funcionario* novo;

    int id;
    cout << "O IBAMA nos obriga a escolher um veterinario para cuidar do animal"
         << "\n";

    cout << "Para continuar o cadastro escolha pelo ID um dos tratadores que temos na loja"
         << "\n";

    for (auto& funcionario : funcionarioStore) {
        if (funcionario->getClassicicacao() == Veterinario) {
            cout << *(funcionario) << "\n";
        }
    }

    cout << "Escolha um veterinario (Utilizando o ID por favor)"
         << "\n";

    cin >> id;

    for (auto& funcionario : funcionarioStore) {
        if (funcionario->getId() == id) {
            novo = funcionario;
        }
    }
    return novo;
}

Funcionario* Petfera::pegarTratador() {
    Funcionario* novo;

    int id;
    cout << "O IBAMA nos obriga a escolher um tratador para cuidar do animal"
         << "\n";

    cout << "Para continuar o cadastro escolha pelo ID um dos tratadores que temos na loja"
         << "\n";

    for (auto& funcionario : funcionarioStore) {
        if (funcionario->getClassicicacao() == Tratador) {
            cout << *(funcionario) << "\n";
        }
    }

    cout << "Escolha um tratador (Utilizando o ID por favor)"
         << "\n";

    cin >> id;

    for (auto& funcionario : funcionarioStore) {
        if (funcionario->getId() == id) {
            novo = funcionario;
        }
    }
    return novo;
}

void Petfera::listarAnimaisPorClasse() {
    int escolha;
    cout << "# Escolha uma das classes"
         << "\n"
         << "0 --> Mamiferos"
         << "\n"
         << "1 --> Aves"
         << "\n"
         << "2 --> Anfibios"
         << "\n"
         << "3 --> Repteis"
         << "\n";

    cin >> escolha;

    for (auto& animal : animalStore) {
        if (animal->getFamilia() == escolha) {
            cout << *(animal) << "\n";
        }
    }
}
void Petfera::listarAnimaisPorFunca() {
    int id;
    listarTodosFuncaionarios();
    cout << "Por favor escolha o id do funcionario que voce quer listar os animais atribuidos a ele"
         << "\n";
    cin >> id;
    for (auto&& funcaId : this->animalStore) {
        if (funcaId->getVeterinario()->getId() == id) {
            cout << *(funcaId->getVeterinario()) << "\n";
        }
        if (funcaId->getTratador()->getId() == id) {
            cout << *(funcaId->getVeterinario()) << "\n";
        }
    }
}
void Petfera::listarTodosFuncaionarios() {
    bool isCadastrarNovo;
    if (this->funcionarioStore.size() == 0) {
        cout << "Sem funcionários cadastrados! " << endl;

        isCadastrarNovo = leBool("Gostaria de cadastrar um novo ? [S/n]");

        if (isCadastrarNovo)
            cadastrarFuncionario();
        return;
    } else {
        cout << "Aqui estao todo os animais na Petfera"
             << "\n\n";

        for (auto& novo : this->funcionarioStore) {
            cout << (*novo) << endl;
        }
        return;
    }
}
void Petfera::listarTodosAnimais() {
    bool isCadastrarNovo;
    if (animalStore.size() == 0) {
        cout << "Sem animais cadastrados! " << endl;

        isCadastrarNovo = leBool("Gostaria de cadastrar um novo ? [S/n]");

        if (isCadastrarNovo) cadastrarAnimal();
        return;
    } else {
        cout << "Aqui estao todo os animais na Petfera"
             << "\n\n";

        for (auto& novo : this->animalStore) {
            cout << (*novo) << endl;
        }
        return;
    }
}

void Petfera::cadastrarAveDomestico() {
    Funcionario* tratador = pegarTratador();
    Funcionario* Veterinario = pegarVeterinario();
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

    Animal* criado = new AveDomestico(this->animalStore.size(), especie, nome, genero, Aves, Veterinario, tratador, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tamanhoDoBico, envergadura, nome_animal, nome_dono);

    if (adicionarAnimal(criado)) {
        this->animais_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarAveDomestico();
    }
}

void Petfera::cadastrarAveExotica() {
    Funcionario* tratador = pegarTratador();
    Funcionario* veterinario = pegarVeterinario();
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
    string aquatico_terrestre = leString("Digite se o animal e aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado ");

    Animal* criado = new AveExotica(this->animalStore.size(), especie, nome, genero, Aves, veterinario, tratador, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tamanhoDoBico, envergadura, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao, pais_origem);

    if (adicionarAnimal(criado)) {
        this->animais_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarAveExotica();
    }
}

void Petfera::cadastrarAveNativa() {
    Funcionario* tratador = pegarTratador();
    Funcionario* veterinario = pegarVeterinario();

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
    string aquatico_terrestre = leString("Digite se o animal e aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;

    Animal* criado = new AveNativo(this->animalStore.size(), especie, nome, genero, Aves, veterinario, tratador, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tamanhoDoBico, envergadura, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao);

    if (adicionarAnimal(criado)) {
        this->animais_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarAveNativa();
    }
}

void Petfera::cadastrarAnfibioDomestico() {
    Funcionario* tratador = pegarTratador();
    Funcionario* veterinario = pegarVeterinario();
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

    Animal* criado = new AnfibioDomestico(this->animalStore.size(), especie, nome, genero, Anfibios, veterinario, tratador, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, habitat, possui_ovos, nome_animal, nome_dono);

    if (adicionarAnimal(criado)) {
        this->animais_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarAnfibioDomestico();
    }
}

void Petfera::cadastrarAnfibioExotico() {
    Funcionario* tratador = pegarTratador();
    Funcionario* veterinario = pegarVeterinario();
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
    string aquatico_terrestre = leString("Digite se o animal e aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado ");

    Animal* criado = new AnfibioExotico(this->animalStore.size(), especie, nome, genero, Anfibios, veterinario, tratador, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, habitat, possui_ovos, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao, pais_origem);

    if (adicionarAnimal(criado)) {
        this->animais_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarAnfibioExotico();
    }
}

void Petfera::cadastrarAnfibioNativo() {
    Funcionario* tratador = pegarTratador();
    Funcionario* veterinario = pegarVeterinario();

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
    string aquatico_terrestre = leString("Digite se o animal e aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;

    Animal* criado = new AnfibioNativo(this->animalStore.size(), especie, nome, genero, Anfibios, veterinario, tratador, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, habitat, possui_ovos, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao);

    if (adicionarAnimal(criado)) {
        this->animais_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarAnfibioNativo();
    }
}

void Petfera::cadastrarReptilDomestico() {
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
    string nome_animal = leString("Digite um nome para o animal \n");
    string nome_dono = leString("Digite um nome do dono para o animal \n");

    Animal* criado = new ReptilDomestico(this->animalStore.size(), especie, nome, genero, Repteis, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, nome_animal, nome_dono);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarReptilExotico() {
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
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado");

    Animal* criado = new ReptilExotico(this->animalStore.size(), especie, nome, genero, Repteis, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao, pais_origem);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarReptilNativo() {
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
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado");

    Animal* criado = new ReptilNativo(this->animalStore.size(), especie, nome, genero, Repteis, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarMamiferoDomestico() {
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
    bool tem_dentes = leBool("Digite S se o animal possui dentes ou N se o animal nao possui dentes \n");
    pelos pelagem = lePelo("Digite o número correspondende à pelagem do animal \n1-ausencia de pelos \n2-pelo reduzido \n3-pelo normal \n");
    TipoDeGestacao tipo_gestacao = leGestacao("Digite o número que indique o tipo de gestacao do animal \n1-Marsupio \n2-Placenta");
    TipoDeMamifero tipo_mamifero = leMamifero("Digite o número que indique o tipo do mamifero\n1-Cursorial \n2-Saltador \n3-Plantigrado \n4-Fossorial \n5-Arboricola \n6-Planador \n7-Aquatico \n8-Voador");
    string nome_animal = leString("Digite um nome para o animal \n");
    string nome_dono = leString("Digite um nome do dono para o animal \n");

    Animal* criado = new MamiferoDomestico(this->animalStore.size(), especie, nome, genero, Mamiferos, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tem_dentes, pelagem, tipo_gestacao, tipo_mamifero, nome_animal, nome_dono);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarMamiferoExotico() {
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
    bool tem_dentes = leBool("Digite S se o animal possui dentes ou N se o animal nao possui dentes \n");
    pelos pelagem = lePelo("Digite o número correspondende à pelagem do animal \n1-ausencia de pelos \n2-pelo reduzido \n3-pelo normal \n");
    TipoDeGestacao tipo_gestacao = leGestacao("Digite o número que indique o tipo de gestacao do animal \n1-Marsupio \n2-Placenta");
    TipoDeMamifero tipo_mamifero = leMamifero("Digite o número que indique o tipo do mamifero\n1-Cursorial \n2-Saltador \n3-Plantigrado \n4-Fossorial \n5-Arboricola \n6-Planador \n7-Aquatico \n8-Voador");
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;
    string pais_origem = leString("Digite qual o pais que ele foi encontrado");

    Animal* criado = new MamiferoExotico(this->animalStore.size(), especie, nome, genero, Mamiferos, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tem_dentes, pelagem, tipo_gestacao, tipo_mamifero, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao, pais_origem);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarMamiferoNativo() {
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
    bool tem_dentes = leBool("Digite S se o animal possui dentes ou N se o animal nao possui dentes \n");
    pelos pelagem = lePelo("Digite o número correspondende à pelagem do animal \n1-ausencia de pelos \n2-pelo reduzido \n3-pelo normal \n");
    TipoDeGestacao tipo_gestacao = leGestacao("Digite o número que indique o tipo de gestacao do animal \n1-Marsupio \n2-Placenta");
    TipoDeMamifero tipo_mamifero = leMamifero("Digite o número que indique o tipo do mamifero\n1-Cursorial \n2-Saltador \n3-Plantigrado \n4-Fossorial \n5-Arboricola \n6-Planador \n7-Aquatico \n8-Voador");
    string aquatico_terrestre = leString("Digite se o animal é aquatico ou terrestre \n");
    bool registro_ibama = leBool("Digite S se o animal possui registro no ibama e N se o animal nao registro no Ibama \n");
    bool territorio_brasileiro = false;
    enExtincao extincao = nao_ameacado;

    Animal* criado = new MamiferoNativo(this->animalStore.size(), especie, nome, genero, Mamiferos, novo2, novo, tipo_temperatura, tipo_pele, tipo_fecundacao, troca_pele, material_eliminidado, tem_dentes, pelagem, tipo_gestacao, tipo_mamifero, aquatico_terrestre, registro_ibama, territorio_brasileiro, extincao);

    cout << "Salvando Animal"
         << "\n";
    adicionarAnimal(criado);
}

void Petfera::cadastrarAnimal() {
    short escolhaTipo;
    string escolha_str;

    cout << "\nOpcao Escolhida: Animal\n"
         << endl;
    cout << "Escolha abaixo o tipo de animal para cadastro: \n"
         << endl;
    cout << " 1 - Cadastrar Anfibio" << endl;
    cout << " 2 - Cadastrar Mamifero" << endl;
    cout << " 3 - Cadastrar Ave" << endl;
    cout << " 4 - Cadastrar Reptil" << endl;
    cout << " 5 - Voltar para o menu" << endl;

    cin >> escolha_str;
    stringstream ss;
    ss << escolha_str;
    ss >> escolhaTipo;

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
            cadastrarReptil();
            break;

        case 5:

            inicio();

            break;

        default:

            cout << "\033[1;33m"
                 << "Nao temos essa Opcao, Escolha de 1-5"
                 << "\033[0m"
                 << "\n";
            cadastrarAnimal();

            break;
    }
}

void Petfera::cadastrarAnfibio() {
    short escolhaSilvestre;
    string escolha_str;

    cout << "\nOpcao Escolhida: Anfibio\n"
         << endl;
    cout << "Escolha abaixo o tipo de Anfibio para cadastro: \n"
         << endl;
    cout << " 1 - Cadastrar Anfibio Domestico" << endl;
    cout << " 2 - Cadastrar Anfibio Exotico" << endl;
    cout << " 3 - Cadastrar Anfibio Nativo" << endl;
    cout << " 4 - voltar para cadastro de animal" << endl;

    cin >> escolha_str;
    stringstream ss;
    ss << escolha_str;
    ss >> escolhaSilvestre;

    switch (escolhaSilvestre) {
        case 1:
            cout << "Cadastrando Anfibio Domestico"
                 << "\n";
            cadastrarAnfibioDomestico();
            break;
        case 2:
            cout << "Cadastrando Anfibio Exotico"
                 << "\n";
            cadastrarAnfibioExotico();
            break;
        case 3:
            cout << "Cadastrando Anfibio Nativo"
                 << "\n";
            cadastrarAnfibioNativo();
        case 4:

            cadastrarAnimal();

            break;

        default:

            cout << "\033[1;33m"
                 << "Nao temos essa Opcao, Escolha de 1-4"
                 << "\033[0m"
                 << "\n";
            cadastrarAnfibio();

            break;
    }

}  // Interface com o usuário

void Petfera::cadastrarAve() {
    short escolhaSilvestre;
    string escolha_str;

    cout << "\nOpcao Escolhida: Ave\n"
         << endl;
    cout << "Escolha abaixo o tipo de Ave para cadastro: \n"
         << endl;
    cout << " 1 - Cadastrar Ave Domestico" << endl;
    cout << " 2 - Cadastrar Ave Exotico" << endl;
    cout << " 3 - Cadastrar Ave Nativo" << endl;
    cout << " 4 - voltar para cadastro de animal" << endl;

    cin >> escolha_str;
    stringstream ss;
    ss << escolha_str;
    ss >> escolhaSilvestre;

    switch (escolhaSilvestre) {
        case 1:
            cout << "Cadastrando Ave Domestico"
                 << "\n";
            cadastrarAveDomestico();
            break;
        case 2:
            cout << "Cadastrando Ave Exotico"
                 << "\n";
            cadastrarAveExotica();
            break;
        case 3:
            cout << "Cadastrando Ave Nativo"
                 << "\n";
            cadastrarAveNativa();

            break;

        case 4:

            cadastrarAnimal();

            break;

        default:

            cout << "\033[1;33m"
                 << "Nao temos essa Opcao, Escolha de 1-4"
                 << "\033[0m"
                 << "\n";
            cadastrarAve();

            break;
    }
}  // Interface com o usuário

//Change
void Petfera::cadastrarMamifero() {
    short escolhaSilvestre;

    cout << "Opcao Escolhida: Mamifero" << endl;
    cout << "Escolha abaixo o tipo de Mamifero para cadastro: " << endl;
    cout << " 1 - Cadastrar Mamifero Domestico" << endl;
    cout << " 2 - Cadastrar Mamifero Exotico" << endl;
    cout << " 3 - Cadastrar Mamifero Nativo" << endl;

    cin >> escolhaSilvestre;

    switch (escolhaSilvestre) {
        case 1:
            cout << "Salvando Mamifero Domestico"
                 << "\n";
            cadastrarAveDomestico();
            break;
        case 2:
            cout << "Salvando Mamifero Exotico"
                 << "\n";
            cadastrarAveExotica();
            break;
        case 3:
            cout << "Salvando Mamifero Nativo"
                 << "\n";
            cadastrarAveNativa();
            break;
        default:
            cout << "Opcao invalida, retornando..."
                 << "\n";
            break;
    }
}

void Petfera::cadastrarReptil() {
    short escolhaSilvestre;

    cout << "Opcaoo Escolhida: Anfibio" << endl;
    cout << "Escolha abaixo o tipo de Anfibio para cadastro: " << endl;
    cout << " 1 - Cadastrar Anfibio Domestico" << endl;
    cout << " 2 - Cadastrar Anfibio Exotico" << endl;
    cout << " 3 - Cadastrar Anfibio Nativo" << endl;

    cin >> escolhaSilvestre;

    switch (escolhaSilvestre) {
        case 1:
            cout << "Salvando Reptil Domestico"
                 << "\n";
            cadastrarReptilDomestico();
            break;
        case 2:
            cout << "Salvando Reptil Exotico"
                 << "\n";
            cadastrarReptilExotico();
            break;
        case 3:
            cout << "Salvando Reptil Nativo"
                 << "\n";
            cadastrarReptilNativo();
            break;
        default:
            cout << "Opcao invalida, retornando..."
                 << "\n";
            break;
    }
}

void Petfera::cadastrarFuncionario() {
    short escolha;
    string escolha_str;

    cout << "\nOpcao Escolhida: Cadastrar funcionario\n"
         << endl;
    cout << "Escolha abaixo o tipo de funcionario para cadastro: \n"
         << endl;
    cout << " 1 - Funcionario Tratador" << endl;
    cout << " 2 - Funcionario Veterinario" << endl;
    cout << " 3 - Voltar para o menu" << endl;

    cin >> escolha_str;
    stringstream ss;
    ss << escolha_str;
    ss >> escolha;

    switch (escolha) {
        case 1:
            cout << "Vamos cadastrar um Funcionario Tratador" << endl;
            cadastrarTratador();
            break;
        case 2:
            cout << "Vamos cadastrar um Funcionario Tratador" << endl;
            cadastrarVeterinario();
            break;
        case 3:

            inicio();

            break;
        default:

            cout << "\033[1;33m"
                 << "Nao temos essa Opcao, Escolha de 1-3"
                 << "\033[0m"
                 << "\n";
            cadastrarFuncionario();

            break;
    }

}  // Interface com o usuário

void Petfera::cadastrarVeterinario() {
    string nome = leString("Digite o nome do Funcionario \n");
    string cpf = leString("Digite o cpf do Funcionario \n");
    tipoFunca classificacao = Veterinario;
    string celular = leString("Digite o celular do funcionario \n");
    string email = leString("Digite o email do funcionario \n");
    bool inscritoCRMV = leBool("Digite S para se o funcionario esta inscrito no CRMV e N para se não está \n");

    Funcionario* novo = new FuncionarioVeterinario(this->funcionarioStore.size(), nome, cpf, classificacao, celular, email, inscritoCRMV);

    if (adicionarFuncionario(novo)) {
        this->funcionarios_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarTratador();
    }
}  // Interface com o usuário

nivelDeSeguranca Petfera::leNivelDeSeguranca() {
    nivelDeSeguranca nivel;
    short escolha;
    cout << "Escolha o nivel de segurança para seu tratador"
         << "\n";

    cout << "5 --> Nivel verde"
         << "\n";
    cout << "6 --> Nivel azul"
         << "\n";
    cout << "7 --> Nivel vermelho"
         << "\n";

    cin >> escolha;
    if (escolha == 5) nivel = Verde;
    if (escolha == 6) nivel = Azul;
    if (escolha == 7) nivel = Vermelho;

    return nivel;
}

void Petfera::cadastrarTratador() {
    string nome = leString("Digite o nome do Funcionario \n");
    string cpf = leString("Digite o cpf do Funcionario \n");
    tipoFunca classificacao = Tratador;
    string celular = leString("Digite o celular do funcionario \n");
    string email = leString("Digite o email do funcionario \n");
    nivelDeSeguranca seguranca = leNivelDeSeguranca();

    Funcionario* novo = new FuncionarioTratador(this->funcionarioStore.size(), nome, cpf, classificacao, celular, email, seguranca);

    if (adicionarFuncionario(novo)) {
        this->funcionarios_cadastrados++;

    } else {
        cout << "Erro no cadastro, tente novamente " << endl;
        cadastrarTratador();
    }
}  // Interface com o usuário

/*
 * Metodos internos para realizar as operações.
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

pelos Petfera::lePelo(string str_prompt) {
    int resposta;

    cout << str_prompt;
    cin >> resposta;

    return pelos(resposta - 1);
}

TipoDeGestacao Petfera::leGestacao(string str_prompt) {
    int resposta;

    cout << str_prompt;
    cin >> resposta;

    return TipoDeGestacao(resposta - 1);
}

TipoDeMamifero Petfera::leMamifero(string str_prompt) {
    int resposta;

    cout << str_prompt;
    cin >> resposta;

    return TipoDeMamifero(resposta - 1);
}

bool Petfera::atualizar_dados_animal() {
    int id_animal;

    cout << "ID do animal a ser atualizado: ";
    cin >> id_animal;

    for (auto& animal : this->animalStore) {
        if (id_animal == animal->getId()) {

            atualizar_animal(animal);

        } else {
            cout << "ID nao encontrado, retornando...";
        }
    }

    return true;
}


bool Petfera::atualizar_dados_funcionario() {
    int id_funcionario;


    cout << "ID do funcionario a ser atualizado: ";
    cin >> id_funcionario;

    for (auto& funcionario : this->funcionarioStore) {
        if (id_funcionario == funcionario->getId()) {
    

            atualizar_funcionario(funcionario);
            break;
           
        }else {
            cout << "ID nao encontrado, retornando...";
        }

    }

    return true;
}


void Petfera::removerAnimal() {
    int id;

    cout << "Voce escolheu: Remover Animal.\n"
         << endl;
    cout << "Numero de identificacao (id) do animal: ";
    cin >> id;
    int index = 0;

    for (auto& animal : this->animalStore) {
        if (animal->getId() == id) {
            this->animalStore.erase(this->animalStore.begin() + index);
        }

        index++;
    }
}

void Petfera::removerFuncionario() {
    int id;

    cout << "Voce escolheu: Remover funcionario.\n"
         << endl;
    cout << "Numero de identificacao (id) do funcionario: ";
    cin >> id;

    int index = 0;

    for (auto& funcionario : this->funcionarioStore) {
        if (funcionario->getId() == id) {
            this->funcionarioStore.erase(this->funcionarioStore.begin() + index);
        }

        index++;
    }
}

bool Petfera::atualizar_funcionario(Funcionario* funcionario){


    string alterar_string;
    bool alterar_bool;
    short escolha;
    string escolha_str;
    stringstream ss;

    cout << "o que vc quer atualizar? "
         << "\n"
         << "# Temos as seguintes opcao : # "
         << "\n"
         << "    1 -> Alterar nome "
         << "\n"
         << "    2 -> Alterar cpf"
         << "\n"
         << "    3 -> Alterar numero do telefone"
         << "\n"
         << "    4 -> Alterar email"
         << endl;

         if (funcionario->getClassicicacao()  == Veterinario){
             
            cout << "    5 -> Alterar inscrição no CRMV" << endl;

         }else if(funcionario->getClassicicacao()  == Tratador){

            cout << "    6 -> Alterar nivel de seguranca" << endl;
         }

    cin >> escolha_str;
    ss << escolha_str;
    ss >> escolha;

    cout << "Escolha uma opcao"
         << "\n";

    if (escolha == 1) {

        cout << "Digite o novo nome \n";

        cin >> alterar_string;

        funcionario->setNome(alterar_string);

    } else if (escolha == 2) {
        cout << "Digite o novo cpf \n";

        cin >> alterar_string;

        funcionario->setCpf(alterar_string);

    } else if (escolha == 3) {
        cout << "Digite o novo cell \n";

        cin >> alterar_string;

        funcionario->setCelularProfissional(alterar_string);

    } else if (escolha == 4) {
        cout << "Digite o novo email \n";

        cin >> alterar_string;

        funcionario->setEmail(alterar_string);

    }
    else if (escolha == 5) {

        alterar_bool = leBool("Possui inscricao CRMV? [S/N]");

        FuncionarioVeterinario* func_vet = dynamic_cast<FuncionarioVeterinario*>(funcionario);

        func_vet->setIsInscritoCRMV(alterar_bool);

    }
    else if (escolha == 6) {

        cout << "Digite o novo nivel\n";

        nivelDeSeguranca seguranca = leNivelDeSeguranca();

        FuncionarioTratador* func_trat = dynamic_cast<FuncionarioTratador*>(funcionario);

        func_trat->setClassificacaoDeSeguranca(seguranca);

    }else if( escolha == 0 || escolha > 4){

        cout << "Erro, escolha apenas entre os valores informados";
        return false;
    }

    return true;
}   


bool Petfera::atualizar_animal(Animal* animal) {
    bool alterar_bool;
    string alterar_string;
    short escolha;
    string escolha_str;
    stringstream ss;

  cout << "o que vc quer atualizar? "
         << "\n"
         << "# Temos as seguintes opcao : # "
         << "\n"
         << "    1 -> Alterar nome cientifico do animal"
         << "\n"
         << "    2 -> Alterar Nome do animal"
         << "\n"
         << "    3 -> Alterar Tipo de temperatura do animal"
         << "\n"
         << "    4 -> Alterar Tipo de pele do animal"
         << "\n"
         << "    5 -> Alterar Tipo de fecundacao do animal"
         << "\n"
         << "    6 -> Alterar Troca de pele do animal"
         << "\n"
         << "    7 -> Alterar Material eliminado do animal"
         << endl;

    cout << "Escolha uma opcao"
         << "\n";

    cin >> escolha_str;
    ss << escolha_str;
    ss >> escolha;


    if (escolha == 1) {
        cout << "Digite a nova especie \n";

        cin >> alterar_string;

        animal->setEspecie(alterar_string);

    } else if (escolha == 2) {
        cout << "Digite o novo nome \n";

        cin >> alterar_string;

        animal->setNome(alterar_string);

    } else if (escolha == 3) {
        cout << "Digite o novo tipo de temperatura \n";

        cin >> alterar_string;

        animal->setTipo_temperatura(alterar_string);
    } else if (escolha == 4) {
        cout << "Digite o novo tipo de pele \n";

        cin >> alterar_string;

        animal->setTipo_pele(alterar_string);
    } else if (escolha == 5) {
        cout << "Digite o novo tipo de fecundacao \n";

        cin >> alterar_string;

        animal->setTipo_fecundacao(alterar_string);
    } else if (escolha == 6) {
        cout << "Digite de S se troca de pele ou N se nao troca \n";

        cin >> alterar_bool;

        animal->setTroca_pele(alterar_bool);
    } else if (escolha == 7) {
        cout << "Digite o novo material eliminado \n";

        cin >> alterar_string;

        animal->setMaterial_eliminidado(alterar_string);

    } else if (escolha == 0 || escolha > 7) {
        cout << "Erro, escolha apenas entre 1-7";
        return false;
    }

    return true;
}

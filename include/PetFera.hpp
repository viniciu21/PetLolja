#ifndef __PETFERA__
#define __PETFERA__

#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "AnfibioDomestico.hpp"
#include "AnfibioExotico.hpp"
#include "AnfibioNativo.hpp"
#include "AveDomestico.hpp"
#include "AveExotica.hpp"
#include "AveNativo.hpp"
#include "Funcionario.hpp"
#include "FuncionarioTratador.hpp"
#include "FuncionarioVeterinario.hpp"
#include "MamiferoDomestico.hpp"
#include "MamiferoExotico.hpp"
#include "MamiferoNativo.hpp"
#include "ReptilDomestico.hpp"
#include "ReptilExotico.hpp"
#include "ReptilNativo.hpp"

using std::string;
using std::vector;

class Petfera {
   public:
    Petfera();
    ~Petfera();

    void PetferaMenu(int& escolha);
    void inicio();

    /** Métodos criados para ler dados do usuário.
	*  	Esses métodos invocam os métodos internos
	*	que irão efetivar as operações.
	**/
    void cadastrarAnimal();    // Interface com o usuário
    void cadastrarAnfibio();   // Interface com o usuário
    void cadastrarAve();       // Interface com o usuário
    void cadastrarReptil();    // Interface com o usuário
    void cadastrarMamifero();  // Interface com o usuário

    void cadastrarFuncionario();  // Interface com o usuário
    void cadastrarVeterinario();  // Interface com o usuário
    void cadastrarTratador();     // Interface com o usuário
    void salvar_doc_animais();
    void salvar_doc_funcio();

    void cadastrarAnfibioDomestico();
    void cadastrarAnfibioExotico();
    void cadastrarAnfibioNativo();

    void cadastrarAveDomestico();
    void cadastrarAveExotica();
    void cadastrarAveNativa();

    void cadastrarReptilDomestico();
    void cadastrarReptilExotico();
    void cadastrarReptilNativo();

    void cadastrarMamiferoDomestico();
    void cadastrarMamiferoExotico();
    void cadastrarMamiferoNativo();
    void removerAnimal();
    void removerFuncionario();
    /*
	 * Métodos internos para realizar as operações.
	 */
    bool adicionarAnimal(std::shared_ptr<Animal> novo_animal);
    bool adicionarFuncionario(std::shared_ptr<Funcionario> novo_funcionario);

    bool atualizar_dados_funcionario();
    bool atualizar_dados_animal();
    bool atualizar_funcionario(std::shared_ptr<Funcionario> funcionario);
    bool atualizar_animal(std::shared_ptr<Animal> animal);

    /*
	 * Tratamentos
	*/

    // int leID(string str_prompt);
    string leString(string str_prompt);
    t_genero leGenero(string str_prompt);
		t_genero toGenero(string key);
    bool leBool(string str_prompt);
		bool toBool(string key);
    std::shared_ptr<Funcionario> pegarFuncionario();
    pelos lePelo(string str_prompt);
		pelos toPelo(string key);
    TipoDeGestacao leGestacao(string str_prompt);
		TipoDeGestacao toGestacao(string key);
    std::shared_ptr<Funcionario> pegarVeterinario();
		std::shared_ptr<Funcionario> pegarVeterinarioPeloNome(string nome);
    std::shared_ptr<Funcionario> pegarTratador();
		std::shared_ptr<Funcionario> pegarTratadorPeloNome(string nome);

    nivelDeSeguranca leNivelDeSeguranca();

    //familia leClasse(string str_prompt);
    // int le1ou0(string str_prompt);

    void listarAnimaisPorFunca();
    void listarTodosAnimais();
    void listarTodosFuncaionarios();
    void listarAnimaisPorClasse();

   private:
    vector<std::shared_ptr<Animal>> animalStore;
    int animais_cadastrados = 0;
    vector<std::shared_ptr<Funcionario>> funcionarioStore;
    int funcionarios_cadastrados = 0;


};

#endif

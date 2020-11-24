#ifndef __PETFERA__
#define __PETFERA__

#include <iostream>
#include <string>
#include <vector>

#include "AnfibioDomestico.hpp"
#include "AnfibioExotico.hpp"
#include "AnfibioNativo.hpp"
#include "AveDomestico.hpp"
#include "AveExotica.hpp"
#include "Funcionario.hpp"
#include "FuncionarioTratador.hpp"
#include "FuncionarioVeterinario.hpp"

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

    void cadastrarAnfibioDomestico();
    void cadastrarAnfibioExotico();
    void cadastrarAnfibioNativo();

    void cadastrarAveDomestico();
    void cadastrarAveExotica();
    void cadastrarAveNativa();

    /*
	 * Métodos internos para realizar as operações.
	 */
    bool adicionarAnimal(Animal* novo_animal);
    bool adicionarFuncionario(Funcionario* novo_funcionario);

    /*
	 * Tratamentos
	*/

    // int leID(string str_prompt);
    string leString(string str_prompt);
    t_genero leGenero(string str_prompt);
    bool leBool(string str_prompt);
    Funcionario* pegarFuncionario();
    //familia leClasse(string str_prompt);
    // int le1ou0(string str_prompt);

   private:
    vector<Animal*> animalStore;
    vector<Funcionario*> funcionarioStore;
};

#endif

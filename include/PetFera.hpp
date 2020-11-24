#ifndef __PETFERA__
#define __PETFERA__

#include <iostream>
#include <string>

#include "AveExotica.hpp"
#include "AveDomestico.hpp"
#include "AnfibioNativo.hpp"
#include "AnfibioExotico.hpp"
#include "AnfibioDomestico.hpp"
#include "FuncionarioTratador.hpp"
#include "FuncionarioVeterinario.hpp"

#include <vector>
#include <string>

using std::vector;
using std::string;

class Petfera{

public:

	Petfera();
	~Petfera();
	
	/** Métodos criados para ler dados do usuário.
	*  	Esses métodos invocam os métodos internos
	*	que irão efetivar as operações. 
	**/
	void cadastrarAnimal(); // Interface com o usuário
	void cadastrarAnfibio(); // Interface com o usuário
	void cadastrarAve(); // Interface com o usuário
	void cadastrarReptil(); // Interface com o usuário
	void cadastrarMamifero(); // Interface com o usuário
	void cadastrarFuncionario(); // Interface com o usuário
	void cadastrarVeterinario(); // Interface com o usuário
	void cadastrarTratador(); // Interface com o usuário

	
	/*
	 * Métodos internos para realizar as operações.
	 */
	bool adicionarAnimal(Animal* novo_animal);
	bool adicionarAnfibio(Anfibio* novo_anfibio);
	bool adicionarAnfibioDomestico(AnfibioDomestico* novo_anfibioDomestico);
	bool adicionarAve(Ave* novo_ave);
	bool adicionarFuncionario(Funcionario* novo_funcionario);
	bool adicionarVeterinario(FuncionarioVeterinario* novo_veterinario);
	bool adicionarTratador(FuncionarioTratador* novo_tratador);


	/*
	 * Tratamentos
	*/

	int leID(string str_prompt);
	string leString(string str_prompt);
	t_genero leGenero(string str_prompt);
	//familia leClasse(string str_prompt);
	int le1ou0(string str_prompt);
	
private:

	vector<AnfibioDomestico*> anfibioDomestico;

};

#endif

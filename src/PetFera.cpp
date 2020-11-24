#include <string>
#include <sstream>
#include "../include/PetFera.hpp"
#include "../include/AnfibioDomestico.hpp"
#include "../include/AnfibioExotico.hpp"
#include "../include/AnfibioNativo.hpp"
#include "../include/AveDomestico.hpp"
#include "../include/AveExotica.hpp"
#include "../include/FuncionarioTratador.hpp"
#include "../include/FuncionarioVeterinario.hpp"
#include "../include/Reptil.hpp"
#include "../include/ReptilDomestico.hpp"
#include "../include/ReptilExotico.hpp"
#include "../include/ReptilNativo.hpp"


Petfera::Petfera(){}
Petfera::~Petfera(){
}
	
/** Métodos criados para ler dados do usuário.
*  	Esses métodos invocam os métodos internos
*	que irão efetivar as operações. 
**/
void Petfera::cadastrarAnimal(){

	short escolha;

	cout<< "Opção Escolhida: Animal"<<endl;
	cout<< "Escolha abaixo o tipo de animal para cadastro: "<<endl;
	cout<< " 1 - Cadastrar Anfibio"<<endl;
	cin >> escolha;

	switch(escolha){

		case 1: 
			cadastrarAnfibio();
		break;

		default: 
			cout<< "Opção Invalida, retornando..."<<endl;
			cadastrarAnimal();
		break;
	}



}// Interface com o usuário
void Petfera::cadastrarAnfibio(){

	short escolha;

	/**
		Variaveis criação do anfibio
	**/

	int id;
    string especie;
    string nome;
    t_genero genero;
    string veterinario;
    string tratador;
    string tipo_temperatura;
    string tipo_pele;
    string tipo_fecundacao;
    bool troca_pele;
    string material_eliminidado;
    string habitat;
    bool possui_ovos;
    string nome_animal;
    string nome_dono;

    Funcionario *novo = new FuncionarioTratador("nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario *novo2 = new FuncionarioVeterinario("nome", "cpf", Veterinario, "asd", "masd", true);


    /** Começo **/

	cout<< "Opcaoo Escolhida: Anfibio"<<endl;
	cout<< "Escolha abaixo o tipo de Anfibio para cadastro: "<<endl;
	cout<< " 1 - Cadastrar Anfibio Domestico"<<endl;
	cin >> escolha;

	if (escolha == 1){

			id = leID("Digite um ID para o animal \n");
			especie = leString("Digite o nome cientifico para o animal \n");
			nome = leString("Digite o nome popular para o animal \n");
			genero = leGenero("Digite F para femea e M para macho \n");
			veterinario = leString("Digite um veterinario para o animal \n");
			tratador = leString("Digite um tratador para o animal \n");
			tipo_temperatura = leString ("Digite o tipo de temperatura do animal \n");
			tipo_pele = leString ("Digite o tipo de pele do animal \n");
			tipo_fecundacao = leString("Digite o tipo de fecundacao do animal \n");
			troca_pele = le1ou0("Digite 1 se o animal troca a pele ou penas e 2 se o nao troca pele ou penas \n");
			material_eliminidado = leString("Digite o tipo de material eliminidado pelo animal \n");
			habitat = leString("Digite o tipo de habitat do animal \n");
			possui_ovos = le1ou0("Digite 1 se o animal possui ovos e 2 se o animal nao possui ovos \n");
			nome_animal = leString("Digite um nome para o animal \n");
			nome_dono = leString("Digite um nome do dono para o animal \n");

			AnfibioDomestico* criado = new AnfibioDomestico(
													id,
					                                especie,
					                                nome,
					                                genero,
					                               "Anfibio",
					                                novo2,
					                                novo,
					                                tipo_temperatura,
					                                tipo_pele,
					                                tipo_fecundacao,
					                                troca_pele,
					                                material_eliminidado,
					                                habitat,
					                                possui_ovos,
					                            	nome_animal,
					                            	nome_dono);

			adicionarAnfibioDomestico(criado);

			//fazer upcasting para anfibio aqui e chamar adicionarAnfibio();
			//fazer upcasting para animal aqui e chamar adicionarAnimal();

		}else{ 
			cout<< "Opção Invalida, retornando..."<<endl;
			cadastrarAnfibio();
		}	

} // Interface com o usuário
void Petfera::cadastrarAve(){} // Interface com o usuário
void Petfera::cadastrarFuncionario(){} // Interface com o usuário
void Petfera::cadastrarVeterinario(){} // Interface com o usuário
void Petfera::cadastrarTratador(){} // Interface com o usuário


/*
 * Métodos internos para realizar as operações.
 */
bool Petfera::adicionarAnimal(Animal* novo_animal){
	
	return true;
}
bool Petfera::adicionarAnfibio(Anfibio* novo_anfibio){
	return true;
}

bool Petfera::adicionarAnfibioDomestico(AnfibioDomestico* novo_anfibioDomestico){
	this->anfibioDomestico.push_back(novo_anfibioDomestico);

		for (auto& novo : this->anfibioDomestico){

			cout << (*novo) << endl;
		}

	return true;
}
bool Petfera::adicionarAve(Ave* novo_ave){
	return true;
}
bool Petfera::adicionarFuncionario(Funcionario* novo_funcionario){
	return true;
}
bool Petfera::adicionarVeterinario(FuncionarioVeterinario* novo_veterinario){
	return true;
}
bool Petfera::adicionarTratador(FuncionarioTratador* novo_tratador){
	return true;
}
	



int Petfera::leID(string str_prompt){

	int id;
	string linha;
	getline(cin, linha); // apenas para limpar a entrada
	cout << str_prompt;
    while (getline(cin, linha))
    {
        std::stringstream ss(linha);
        if (ss >> id)
        {
            if (ss.eof())
            {
                break;
            }
        }
        cout << "Valor invalido. Tente Novamente" << endl;
        cout << str_prompt;
    }

    return id;
   	
}

string Petfera::leString(string str_prompt){
	string var;
	cout << str_prompt;
	cin >> var;
	return var;
}

t_genero Petfera::leGenero(string str_prompt){

	string genero_string;
	t_genero genero;

	do{
		cout << str_prompt;
		cin >> genero_string;

		if (genero_string == "F" || genero_string == "f")
		{
			genero = F;
			genero_string = "F";
			break;

		}else if (genero_string == "M" || genero_string == "m"){

			genero = M;
			genero_string = "M";
			break;
		}


	}while(genero_string != "F" || genero_string != "M" );

    return genero;
   	
}


/*familia Petfera::leClasse(string str_prompt){

	string classe;
	familia classe_tratado;

	do{
		cout << str_prompt;
		cin >> classe;

		if (classe == "Mamiferos" || classe == "mamiferos"){

				classe_tratado = Mamiferos;
				classe = "Mamiferos";
				break;

			}else if(classe == "Aves" || classe == "aves"){

				classe_tratado = Aves;
				classe = "Aves";
				break;

			}
			else if(classe == "Anfibios" || classe == "anfibios"){

				classe_tratado = Anfibios;
				classe = "Anfibios";
				break;


			}else if(classe == "Repteis" || classe == "repteis"){

				classe_tratado = Repteis;
				classe = "Repteis";
				break;

			}

	}while((classe != "Mamiferos" || classe != "Aves") || (classe != "Anfibios" || classe != "Repteis"));

    return classe_tratado;
   	
}

*/

int Petfera::le1ou0(string str_prompt){

	int num;		

	while(num != 1 || num != 2){

		num = leID(str_prompt);

		if (num > 2 || num < 1){

			cout << str_prompt;
		}

		if (num == 1 || num == 2){

			break;
		}
	}

    return num;
   	
}



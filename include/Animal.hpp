#ifndef __ANIMAL__
#define __ANIMAL__

#include <iostream>
#include <string>

using namespace std;

class Animal{

protected:
	
	int          id;
	string       especie;
	string       nome;
	string       genero;
	Veterinario* veterinario;
	Tratador*    tratador;
	string       tipo_temperatura;
	string       tipo_pele;
	string       tipo_fecundacao;
	bool         troca_pele;
	string       material_eliminidado;

public:

	Animal(int id,string especie, string nome, string genero, Veterinario* veterinario, Tratador* tratador, string tipo_temperatura, string tipo_pele, string tipo_fecundacao, bool troca_pele, string material_eliminidado);
	~Animal();

	// Getters
	int          getId();
	string       getEspecie();
	string       getNome();
	string       getGenero();
	Veterinario* getVeterinario();
	Tratador*    getTratador();
	string       getTipo_temperatura();
	string       getTipo_pele();
	string       getTipo_fecundacao();
	bool         getTroca_pele(); 
	string       getMaterial_eliminidado();

	friend std::ostream& operator<<(std::ostream& os, Animal& a);
	virtual ostream& imprimeDados(ostream& o) const = 0;
};

#endif
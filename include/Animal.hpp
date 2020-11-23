#ifndef __ANIMAL__
#define __ANIMAL__

#include <iostream>
#include <string>

#include "./Funcionario.hpp"

using namespace std;

enum familia {
    Mamiferos,
    Aves,
    Anfibios,
    Repteis
};
enum t_genero {
    M = 10,
    F,
};
class Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;
    // virtual istream& leDados(istream&);

   protected:
    int id;
    string especie;
    string nome;
    t_genero genero;
    familia classe;
    Funcionario* veterinario;
    Funcionario* tratador;
    string tipo_temperatura;
    string tipo_pele;
    string tipo_fecundacao;
    bool troca_pele;
    string material_eliminidado;

   public:
    Animal(int id,
           string especie,
           string nome,
           t_genero genero,
           familia classe,
           Funcionario* veterinario,
           Funcionario* tratador,
           string tipo_temperatura,
           string tipo_pele,
           string tipo_fecundacao,
           bool troca_pele,
           string material_eliminidado);
    ~Animal();

    // Getters
    int getId();
    string getEspecie();
    string getNome();
    t_genero getGenero();
    Funcionario* getVeterinario();
    Funcionario* getTratador();
    string getTipo_temperatura();
    string getTipo_pele();
    string getTipo_fecundacao();
    bool getTroca_pele();
    string getMaterial_eliminidado();

    friend std::ostream& operator<<(std::ostream& os, Animal& a);
};

#endif

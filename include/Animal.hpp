#ifndef __ANIMAL__
#define __ANIMAL__

#include <iostream>
#include <string>

using namespace std;

enum familia {
    Mamiferos,
    Aves,
    Anfibios,
    Repteis
};

class Animal {
   private:
    virtual ostream& imprimeDados(ostream&) const = 0;

   protected:
    int id;
    string especie;
    string nome;
    string genero;
    familia classe;
    string veterinario;
    string tratador;
    string tipo_temperatura;
    string tipo_pele;
    string tipo_fecundacao;
    bool troca_pele;
    string material_eliminidado;

   public:
    Animal(int id, string especie, string nome, string genero, familia classe, string veterinario, string tratador, string tipo_temperatura, string tipo_pele, string tipo_fecundacao, bool troca_pele, string material_eliminidado);
    ~Animal();

    // Getters
    int getId();
    string getEspecie();
    string getNome();
    string getGenero();
    string getVeterinario();
    string getTratador();
    string getTipo_temperatura();
    string getTipo_pele();
    string getTipo_fecundacao();
    bool getTroca_pele();
    string getMaterial_eliminidado();
    
    friend std::ostream& operator<<(std::ostream& os, Animal& a);
};

#endif

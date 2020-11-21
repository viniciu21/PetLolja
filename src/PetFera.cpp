#include "../include/PetFera.hpp"

#include <iostream>

#include "../include/Anfibio.hpp"
#include "../include/AnfibioNativo.hpp"
#include "../include/Animal.hpp"
#include "../include/AnimalNativo.hpp"
#include "../include/AnimalSilvestre.hpp"

using namespace std;

void PetFera::menu() {
    short escolha;

    cout << "1 - cadastrar animal";
    cin >> escolha;

    switch (escolha) {
        case 1:
            cadastrarAnimal();
            break;
    }
}

bool PetFera::cadastrarAnimal() {
    short escolha;
    cout << "1 - cadastrar anfibio nativo" << endl;
    cout << "2 - cadastrar anfibio exotico" << endl;
    cout << "3 - cadastrar anfibio domestico" << endl;
    cin >> escolha;
    if (escolha == 1) {
        AnfibioNativo* novo = new AnfibioNativo(1, "lagarto", "larga", "macho", "vet", "trata", "temperatura", "pele", "fecunda", true, "xixi", "nao sei", true, "terrestre", true, true, ameacado);
        this->anfibio_nativos.push_back(novo);
        for (auto& novo : this->anfibio_nativos) {
            cout << (*novo) << endl;
        }
        return true;
    }
    return false;
}

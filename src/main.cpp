#include <iostream>

#include "../include/Anfibio.hpp"
#include "../include/AnfibioNativo.hpp"
#include "../include/Animal.hpp"
#include "../include/AnimalNativo.hpp"
#include "../include/AnimalSilvestre.hpp"
#include "../include/AveExotica.hpp"
#include "../include/FuncionarioVeterinario.hpp"
#include "../include/PetFera.hpp"

int main() {
    // PetFera loja;
    // loja.menu();

    // Animal *novo = new AveExotica(1, "mamador", "pru", "M", Mamiferos, "nome", "lala", "32", "lala", "sexual", true, "coco", "grande", "grande", "aquatico", true, true, ameacado, "lala");

    Funcionario *novo = new FuncionarioVeterinario("jamir", "lala", Tratador, "12", "asdas", true);

    std::cout << *novo << "\n";

    return 0;
}

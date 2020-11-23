#include <iostream>

#include "../include/AnfibioExotico.hpp"
#include "../include/AnfibioNativo.hpp"
#include "../include/AveDomestico.hpp"
#include "../include/AveExotica.hpp"
#include "../include/FuncionarioTratador.hpp"
#include "../include/FuncionarioVeterinario.hpp"

int main() {
    // PetFera loja;
    // loja.menu();

    // Funcionario* lista[2];

    Funcionario *novo = new FuncionarioTratador("nome", "cpf", Tratador, "asd", "masd", Verde);
    Funcionario *novo2 = new FuncionarioVeterinario("nome", "cpf", Veterinario, "asd", "masd", true);

    Animal *pru = new AnfibioExotico(1, "lala", "nome", M, Aves, novo2, novo, "1", "2", "3", true, "coco", "12", true, "aquatico", true, true, ameacado, "brasil");

    Animal *pru2 = new AnfibioNativo(1, "lala", "nome", F, Anfibios, novo2, novo, "1", "2", "3", true, "coco", "haha", true, "aquatioc", true, true, ameacado);

    Animal *pru3 = new AveDomestico(1, "lala", "nome", F, Anfibios, novo2, novo, "1", "2", "3", true, "coco", "10", "10", "prupru", "vinicius");

    cout
        << *pru << "\n";
    cout << *pru2 << "\n";
    cout << *pru3 << "\n";

    return 0;
}

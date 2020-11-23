#include <iostream>

#include "../include/AnfibioDomestico.hpp"
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

    Animal *pru3 = new AnfibioDomestico(1, "Pruprusmalditus", "Prupru", M, Anfibios, novo2, novo, "1", "2", "3", true, "coco", "Savana", true, "prupru", "vinicius");

    cout << *pru3 << "\n";

    cout << pru3->getNome() << "\n";
    cout << novo->getNome() << "\n";
    return 0;
}

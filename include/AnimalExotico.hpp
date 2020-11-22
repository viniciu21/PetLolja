#ifndef __EXOTICO__
#define __EXOTICO__

#include <iostream>

#include "AnimalSilvestre.hpp"

using namespace std;

class AnimalExotico : public AnimalSilvestre {
   protected:
    string pais_origem;

   public:
    AnimalExotico(
        string aquatico_terrestre,
        bool registro_ibama,
        bool territorio_brasileiro,
        enExtincao extincao,
        string pais_origem);

    ~AnimalExotico();

    // Getters
    string getPais_origem();
};

#endif

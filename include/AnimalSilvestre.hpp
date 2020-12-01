#ifndef __SILVESTRE__
#define __SILVESTRE__

#include <iostream>

using namespace std;

enum enExtincao {
    ameacado,
    nao_ameacado
};

class AnimalSilvestre : public Animal{
   protected:
    string aquatico_terrestre;
    bool registro_ibama;
    bool territorio_brasileiro;
    enExtincao extincao;

   public:
    AnimalSilvestre(
        string aquatico_terrestre,
        bool registro_ibama,
        bool territorio_brasileiro,
        enExtincao extincao);

    ~AnimalSilvestre();

    // Getters

    string getAquatico_terrestre();
    bool getRegistro_ibama();
    bool getTerritorio_brasileiro();
    enExtincao getExtincao();

    string setAquatico_terrestre(string aquatico_terrestre);
    bool setRegistro_ibama(bool registro_ibama);
    bool setTerritorio_brasileiro(bool territorio_brasileiro);
    enExtincao setExtincao(enExtincao extincao);
};

#endif

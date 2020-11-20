#include "Anfibio.hpp"

	Anfibio(
		int id,
		string especie, 
		string nome, 
		Veterinario* veterinario, 
		Tratador* tratador, 
		string tipo_temperatura, 
		string tipo_pele, 
		string tipo_fecundacao, 
		bool troca_pele, 
		string material_eliminidado,
		string habitat,
		bool possui_ovos);

	~Anfibio();

	friend ostream& operator<< (ostream& o, Anfibio& as);
	virtual ostream& imprimeDados(ostream& o) const = 0;

	string getHabitat();
	bool getPossui_ovos();
	
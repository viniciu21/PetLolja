#ifndef __ANIMAL__
#define __ANIMAL__

#include<iostream>

class Animal{
protected:
	
	int id;
	bool peconhento;
	Veterinario vet;
	Tratador tratador;

public:

	Animal();
	~Animal();

	// Getters
	int getId();
	bool getPeconhento();
		
};
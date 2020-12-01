#Makefile for "LP PETFERA" C++ application
#Created by Thauanny, Vinicius, Lucas 22/11/2020

BIN = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -std=c++14 -I./include

OBJS = $(BIN)/main.o $(BIN)/Anfibio.o $(BIN)/AnfibioDomestico.o $(BIN)/AnfibioExotico.o $(BIN)/AnfibioNativo.o  $(BIN)/Animal.o $(BIN)/AnimalDomestico.o $(BIN)/AnimalExotico.o $(BIN)/AnimalNativo.o $(BIN)/AnimalSilvestre.o $(BIN)/Ave.o $(BIN)/AveDomestico.o $(BIN)/AveExotica.o $(BIN)/AveNativo.o $(BIN)/FuncionarioTratador.o $(BIN)/FuncionarioVeterinario.o $(BIN)/Funcionario.o $(BIN)/PetFera.o $(BIN)/Mamifero.o $(BIN)/MamiferoDomestico.o $(BIN)/MamiferoExotico.o $(BIN)/MamiferoNativo.o  $(BIN)/Reptil.o $(BIN)/ReptilDomestico.o $(BIN)/ReptilExotico.o $(BIN)/ReptilNativo.o

all : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

$(BIN)/Anfibio.o : $(SRC)/Anfibio.cpp $(INC)/Anfibio.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Anfibio.cpp -o $@

$(BIN)/AnfibioDomestico.o : $(SRC)/AnfibioDomestico.cpp $(INC)/AnfibioDomestico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnfibioDomestico.cpp -o $@

$(BIN)/AnfibioExotico.o : $(SRC)/AnfibioExotico.cpp $(INC)/AnfibioExotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnfibioExotico.cpp -o $@

$(BIN)/AnfibioNativo.o : $(SRC)/AnfibioNativo.cpp $(INC)/AnfibioNativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnfibioNativo.cpp -o $@

$(BIN)/Animal.o : $(SRC)/Animal.cpp $(INC)/Animal.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Animal.cpp -o $@

$(BIN)/AnimalDomestico.o : $(SRC)/AnimalDomestico.cpp $(INC)/AnimalDomestico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnimalDomestico.cpp -o $@

$(BIN)/AnimalExotico.o : $(SRC)/AnimalExotico.cpp $(INC)/AnimalExotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnimalExotico.cpp -o $@

$(BIN)/AnimalNativo.o : $(SRC)/AnimalNativo.cpp $(INC)/AnimalNativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnimalNativo.cpp -o $@

$(BIN)/AnimalSilvestre.o : $(SRC)/AnimalSilvestre.cpp $(INC)/AnimalSilvestre.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AnimalSilvestre.cpp -o $@

$(BIN)/Ave.o : $(SRC)/Ave.cpp $(INC)/Ave.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Ave.cpp -o $@

$(BIN)/AveDomestico.o : $(SRC)/AveDomestico.cpp $(INC)/AveDomestico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AveDomestico.cpp -o $@

$(BIN)/AveExotica.o : $(SRC)/AveExotica.cpp $(INC)/AveExotica.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AveExotica.cpp -o $@

$(BIN)/AveNativo.o : $(SRC)/AveNativo.cpp $(INC)/AveNativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/AveNativo.cpp -o $@

$(BIN)/FuncionarioTratador.o : $(SRC)/FuncionarioTratador.cpp $(INC)/FuncionarioTratador.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/FuncionarioTratador.cpp -o $@

$(BIN)/FuncionarioVeterinario.o : $(SRC)/FuncionarioVeterinario.cpp $(INC)/FuncionarioVeterinario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/FuncionarioVeterinario.cpp -o $@

$(BIN)/Funcionario.o : $(SRC)/Funcionario.cpp $(INC)/Funcionario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Funcionario.cpp -o $@

$(BIN)/PetFera.o : $(SRC)/PetFera.cpp $(INC)/PetFera.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/PetFera.cpp -o $@

$(BIN)/Mamifero.o : $(SRC)/Mamifero.cpp $(INC)/Mamifero.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Mamifero.cpp -o $@

$(BIN)/MamiferoDomestico.o : $(SRC)/MamiferoDomestico.cpp $(INC)/MamiferoDomestico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/MamiferoDomestico.cpp -o $@

$(BIN)/MamiferoExotico.o : $(SRC)/MamiferoExotico.cpp $(INC)/MamiferoExotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/MamiferoExotico.cpp -o $@

$(BIN)/MamiferoNativo.o : $(SRC)/MamiferoNativo.cpp $(INC)/MamiferoNativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/MamiferoNativo.cpp -o $@

$(BIN)/Reptil.o : $(SRC)/Reptil.cpp $(INC)/Reptil.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Reptil.cpp -o $@

$(BIN)/ReptilDomestico.o : $(SRC)/ReptilDomestico.cpp $(INC)/ReptilDomestico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/ReptilDomestico.cpp -o $@

$(BIN)/ReptilExotico.o : $(SRC)/ReptilExotico.cpp $(INC)/ReptilExotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/ReptilExotico.cpp -o $@

$(BIN)/ReptilNativo.o : $(SRC)/ReptilNativo.cpp $(INC)/ReptilNativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/ReptilNativo.cpp -o $@

clean:
	rm -f core $(PROG) $(OBJS)

//========================================================================================
// Practica Computabilidad y Algoritmia
// Autor Darwin Gonzalez Suarez
// Programa principal o Main
//========================================================================================

#include "TuringMachine.hpp"
#include "Tape.hpp"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main (void){

	int option;
	TuringMachine example_TM = TuringMachine();
	cout << "1. Mostrar maquina de turing " << endl;
	cout << "2. Comprobar cinta " << endl;
	cout << "0. Salir " << endl;
	do{
		cout << "Elige una opcion" << endl;
		cin >> option;
		switch(option){
			case 1:
				example_TM.print_TM();
				break;
			case 2:
				example_TM.TM_check_tape();
				break;
			case 0:
				cout << "Saliendo del programa" << endl;
				break;
		}
	}while(option!=0);
}

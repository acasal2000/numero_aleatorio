#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tentarDeNovo(){
	int tentarNovamente;
	
	cout << endl << "Desejas tentar de novo? \n1. Sim \n2. Não" << endl;
	cout << "Opção: ";
	cin >> tentarNovamente;
			
	if(tentarNovamente == 1){
		system("cls");
	}
	else{
		exit(3);
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	int iSecret, iGuess;
	int numeroAleatorio;
	int numeroInput;
	
	do{	
		numeroAleatorio = rand() % 100 + 1; // 1 a 100
		cout << "Número Aleatório: " << numeroAleatorio << endl;
		
		cout << endl << "Introduz um número:" << endl;
		cin >> numeroInput;
		
		if(numeroInput == numeroAleatorio){
			cout << endl << "Adivinhaste o número aleatório!" << endl;
			break;		
		}
		else{
			cout << endl << "Não acertaste no número aleatório!" << endl << endl;
			tentarDeNovo();
		}
	}
	while(numeroInput != numeroAleatorio);
	
	return 0;
}

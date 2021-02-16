#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tentarDeNovo(){
	int tentarNovamente;
	
	cout << endl << "Desejas tentar de novo? \n1. Sim \n2. N�o" << endl;
	cout << "Op��o: ";
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
		cout << "N�mero Aleat�rio: " << numeroAleatorio << endl;
		
		cout << endl << "Introduz um n�mero:" << endl;
		cin >> numeroInput;
		
		if(numeroInput == numeroAleatorio){
			cout << endl << "Adivinhaste o n�mero aleat�rio!" << endl;
			break;		
		}
		else{
			cout << endl << "N�o acertaste no n�mero aleat�rio!" << endl << endl;
			tentarDeNovo();
		}
	}
	while(numeroInput != numeroAleatorio);
	
	return 0;
}

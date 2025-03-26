/*

Date: 	26/03/2025
PGM:	Definito un vettore (vet) di 20, sviluppare un algoritmo in linguaggio C++ che consente di :

	a. Caricare il vettore (vet) con elementi random compresi tra 0 e 100
	0) Comparare il valore presente nel vettore con l’indice di posizione., se i valori sono uguali,

indicare 1, in un vettore d’appoggio precedentemente creato, In caso contrario indicare “0”

	b. Stampare entrambi i vettori su righe separate
	Costruire l’applicativo utilizzando esclusivamente i moduli di sottoprogramma con passaggio parametri
	
*/

#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctime>
#include<vector>
#include<random>

using namespace std;

int main(){
	
	srand(time(0));
	int const DIM = 20;
	int const SUP = 100;
	int const INF = 0;
	int vet_rand[DIM];

// generate i vector
	
for(int i = 0; i < DIM; i++){
	cout<<setw(4)<<i;
}

cout<<endl<<endl;	

// generate random value vector 

for (int i = 0; i < DIM; i++){
	vet_rand[i] = rand()%(SUP-INF+1) + INF;
	// rand()&101 + 0;
	cout<<setw(4)<<vet_rand[i];
}

cout<<endl<<endl;

//comparing the 2 vectors

for(int i = 0; i < DIM; i++){
	
	if(i == vet_rand[i]){
		cout<<setw(4)<<1;
	}
	else{
		cout<<setw(4)<<0;
	}
}

	
	
	return 0;
}

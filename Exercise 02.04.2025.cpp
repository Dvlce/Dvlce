
/*

Date: 29.03.2025
Task:

 1. Declare vector of integers vet_n with values from 65 to 90
 2. Declare a vector of characters vet_c where we will store characters corresponding to the numbers in vet_n
 3. Inside a function `transform`, convert numbers from vet_n into characters and store them in vet_c
 4. Copy the contents of vet_c into another vector vet_o
 5. Sort the vector vet_o (which contains characters) using a sorting function

*/

//LIBRARY

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <cmath>
#include <ctime> 
#include <cstdlib>
#include <string.h>
#include <windows.h> 
#include <iomanip>   
#include <locale.h>


using namespace std;

int main(){
	
	srand(time(0));
	int const SUP = 90;
	int const INF = 65;
	int const DIM = 5;
	int vet_rand[DIM];
	char vet_char[DIM];
	int vet_cop[DIM];
	char vet_r[DIM];
	
	// generate index
	
	for(int i = 1; i <= DIM; i++){
		cout<<setw(4)<<i;
	}
	
cout<<endl<<endl;

	// generate vector rand
	
	for(int i = 0; i < DIM; i++){
		vet_rand[i] = rand()%(SUP-INF+1)+INF;
		//rand()%26 + 65
		cout<<setw(4)<<vet_rand[i];
	}	
	
cout<<endl<<endl;
	
	// translate from numbers to characters
	
	for(int i = 0; i < DIM; i++){
		vet_char[i] = rand()%(SUP-INF+1)+INF;
		//rand()%36 + 65
		cout<<setw(4)<<vet_char[i];
	}		

cout<<endl<<endl;

//	copy the vector char

	for(int i = 0; i < DIM; i++){
		vet_cop[i] = vet_rand[i];
		cout<<setw(4)<<vet_cop[i];
	}

// reorder the vector copy

for(int i = 0; i < DIM - 1; i ++){
	for(int j = 0; j < DIM - i - 1; j++){
		if(vet_cop[j] > vet_cop[j+1]){
			int temp = vet_cop[j];
			vet_cop[j] = vet_cop[j+1];
			vet_cop[j + 1] = temp;
			}		
	}
}

cout<<endl<<endl;

// cout of odinate vector r

	for(int i = 0; i < DIM; i++){
		vet_r[i] = vet_cop[i];
		cout<<setw(4)<<vet_r[i];
	}

	return 0;
}

/*

Date: 27.03.2025
Task:

You need to write a C++ program that does the following:

Load a Vector with (10 elements) with random number between 10 and 20
Create thiskind of functions:

1. startup vector
2. viewer vector
3. index vector
4. media of the elmentens in the rand vector
5. biggest number in the rand vector
6. position of poin 5.

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

void index(int dim){
	
for(int i = 0; i < dim; i++){
	cout<<setw(4)<<i;
	}
}


void rand(int dim, int sup, int inf, int vet_rand[]){
	
for(int i = 0; i < dim; i++){
	vet_rand[i] = rand()%(sup-inf+1)+inf;
	//rand()%101+0;
	cout<<setw(4)<<vet_rand[i];	
}

}

void med(float vet_media, int vet_rand[], float media, int dim){
	
	for(int i = 0; i < dim; i++){
	vet_media = vet_media += vet_rand[i];

}
	cout<<vet_media<<endl;
	media = vet_media / dim;
	cout<<"media: "<<media<<endl;
}

// & = is used to share the information and data between int main and the function
// if & not presented in the function it will only read!

void maxvalue(int & max_position, int & max_value, int dim, int vet_rand[]){
	
	for (int i = 1; i < dim; i++) { 
    if (vet_rand[i] > max_value) { 
        max_value = vet_rand[i];   
        max_position = i;     
    }
}

}

int main(){
	
srand(time(0));	

int const dim = 10;	
int const sup = 20;
int const inf = 10;

int vet_rand[dim];
int swap[dim];
int vet_copy[dim];
int vet_app[dim];
float vet_media;
float media;

int max_value = vet_rand[0];
int max_position = 0; 
  
//Generate index for a clean UI

index(dim);
cout<<endl<<endl;

//Generate random numbers between 0 and 100

rand(dim, sup, inf, vet_rand);
cout<<endl<<endl;

// media of the value in the rand vector

med(vet_media, vet_rand, media, dim);
	
//seeking for the biggest number in vet_rand:

//----------------------------------
maxvalue(max_position,  max_value,  dim,  vet_rand);

//----------------------------------
//USED CHAT GPT .

cout<<endl;
cout<<"maximum value is: "<<endl;
cout<<max_value<<endl;
cout<<"the position is: "<<endl;
cout<<max_position;

	
	return 0;
}

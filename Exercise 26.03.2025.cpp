/*

Date: 	26/03/2025
Task:

Create an array (vet) of size 20 and fill it with random values between 0 and 100.
Compare each element in the array with its index (position). 

	If the value at an index is equal to the index, store 1 in a separate helper array (support). 
	If the values are not equal, store 0.

Print both arrays (vet and support) on separate lines.
Implement the solution using functions (subprograms) with parameter passing.
	
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

// generate index vector
	
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

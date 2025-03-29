/*

Date: 29.03.2025
Task:

1. Create an array of 20 integers with random values between 15 and 75.
2. Initialize the array with random values.
3. Print the array elements.
4. Ask the user to input an index (between 0 and 19).
5. Validate that the index is within the valid range (0 to 19).
6. Check if the element at the specified index is even or odd.
   - If the element is even, return true.
    - If the element is odd, return false.

Prototype of the function:

	bool isEven(int arr[], int index, int size);

 7. create a vector of 20 elements that is equal to the inizial vector but you need to sostitute the odd with a 0
 8. visualize the number of elements even of the vector from the start and then it displays the second vector (vet_pari)
 
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
	int const SUP = 75;
	int const INF = 15;
	int const DIM = 20;
	int vet_rand[DIM];
	//input result
	int r;
	int vet_i[DIM];
	int vet_par[DIM];
	
	// generate index
	
	for(int i = 0; i < DIM; i++){
		vet_i[i] = i;
		cout<<setw(4)<<vet_i[i];
	}
	
cout<<endl<<endl;

	// generate vector rand
	
	for(int i = 0; i < DIM; i++){
		vet_rand[i] = rand()%(SUP-INF+1)+INF;
		//rand()%60
		cout<<setw(4)<<vet_rand[i];
	}	
	
cout<<endl<<endl;
	
// asking a number between 0 and 19

cout<<"insert a value from 0 to 19: "<<endl;
cin>>r;

do{

if (r >= 0 && r <DIM){

	cout<<vet_rand[r]<<endl;
	
	if(vet_rand[r] % 2 == 0){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}

// correction of the initial vector and rewrite it whe odd with 0

for(int i = 0 ; i < DIM; i++){

	if (vet_rand[i] % 2 == 0) {
    vet_par[i] = vet_rand[i];
	} 
	else {
  	  vet_par[i] = 0;    
	}
}

// print the new vector

for(int i = 0 ; i < DIM; i++){

	cout<<setw(4)<<vet_par[i];
}

}while(r < 0 || r >= DIM);


	return 0;
}

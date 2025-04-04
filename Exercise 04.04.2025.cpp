/*

date: 04.04.2025
Task:

create a vector that generate random letters
between 65-90 (A-Z)
copy this vector in another vector cop(DIM)
the re-order  the copy vector so it will display the letter is the alphabetic order
then count how many times it got displayed

*/

#include<iostream>
#include<ctime>
#include<random>
#include<cmath>
#include<vector>
#include<iomanip>

using namespace std;
int main(){

srand(time(0));

int vet_rand[DIM];
int vet_cop[DIM];
char vet_c[DIM];


//generate an index

for(int i = 0; i < DIM; i++){
   cout<<setw(4)<<i;
}

// generate random numbers

for(int i = 0; i < DIM; i++){
   vet_rand[i] = rand()%26 + 65;
   cout<<setw(4)<<vet_rand[i];
}

// copy the Vector and reorder

for(int i = 0; i < DIM - 1; i++){

}

return 0;

}

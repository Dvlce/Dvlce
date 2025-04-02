#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    // Parola da indovinare
    string parola_da_indovinare = "NIGGA";
    
    // Dimensione della parola da indovinare
    int dimensione_parola = parola_da_indovinare.length();

    // Vettore per memorizzare la parola generata casualmente
    char vet_rand[dimensione_parola + 1];  // +1 per il carattere finale null terminator

    // Semina il generatore di numeri casuali
    srand(time(0));

    int tentativi = 0;
    bool trovato = false;

    // Ciclo per generare tentativi finché non troviamo la parola corretta
    while (!trovato) {
        tentativi++;
        
        // Genera una sequenza casuale di lettere
        for (int i = 0; i < dimensione_parola; i++) {
            vet_rand[i] = 'A' + rand() % 26;  // Genera una lettera casuale tra 'A' e 'Z'
        }
        vet_rand[dimensione_parola] = '\0';  // Aggiungi il carattere di terminazione stringa
        
        // Mostra il tentativo
        cout << "Tentativo #" << tentativi << ": " << vet_rand << endl;

        // Verifica se la parola generata è corretta
        if (parola_da_indovinare == vet_rand) {
            trovato = true;
            cout << "Parola corretta trovata dopo " << tentativi << " tentativi!" << endl;
        }
    }

    return 0;
}

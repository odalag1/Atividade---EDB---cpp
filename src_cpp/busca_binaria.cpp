#include "busca_binaria.hpp"

using namespace std;


bool isBadVersion(int version, int bad) {
    return version >= bad;
} //simulacao da API


int busca_Binaria(int n, int bad) { 
    int esquerdo = 1;
    int direita = n;
    int primeiraVersaoRuim = -1; 
    // ...
    
    while (esquerdo <= direita) {
        int meio = esquerdo + (direita - esquerdo) / 2; 
        
        if (isBadVersion(meio, bad)) { 
            primeiraVersaoRuim = meio;
            
            
            direita = meio - 1; 
        } else {
            esquerdo = meio + 1;
        } 
    }
    
    return primeiraVersaoRuim; 
}






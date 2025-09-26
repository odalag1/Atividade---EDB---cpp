#include "busca_binaria.hpp"

using namespace std;


bool isBadVersion(int version, int bad) {
    return version >= bad;
} //simulacao da API


int busca_Binaria(int v[],int tamanho, int bad) { 
    
    int esquerdo = 0;
    int direita = tamanho - 1;
    int indicePrimeiraVersaoRuim = -1; 
    int meio = 0;
    
    while (esquerdo <= direita) {
        meio = (direita + esquerdo) / 2;
        
        // Chamada direta à função isBadVersion, usando o valor do vetor e o número de controle
        if (isBadVersion(v[meio], bad)) { 
            indicePrimeiraVersaoRuim = meio;
            direita = meio - 1; 
        } else {
            esquerdo = meio + 1;
        } 
    }
    
    return indicePrimeiraVersaoRuim; 
}






#include "busca_seq_ordenada.hpp"

void bubbleSort(int v[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]); // Troca os elementos
            }
        }
    }
}


int busca_seq_ordenada(int v[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++)
    {
        if (v[i] == chave){
            return i; //posicao da chave
        } else if (v[i] > chave){
            return -1; //Nao encontra a chave 
        }
        
    }
    
    return -1; 
}

int conta_especialidades_distintas(int v[], int tamanho) {
    if (tamanho <= 0) return 0;

    bubbleSort(v, tamanho); // Ordena o vetor

    int unicos[tamanho];
    int contador_distintos = 0;

    for (int i = 0; i < tamanho; i++) {
        // Usa busca sequencial para verificar se já foi contado
        if (busca_seq_ordenada(unicos, contador_distintos, v[i]) == -1) {
            unicos[contador_distintos] = v[i];
            contador_distintos++;
        }
    }
    return contador_distintos;
}
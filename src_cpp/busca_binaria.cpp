#include "busca_binaria.hpp"

#include "busca_binaria.hpp"

#include <iostream>
using namespace std;

int busca_Binaria(int v[], int tamanho, int chave){
    int esquerdo = 0;
    int direita = tamanho-1;
    int meio = 0;
    
    while (esquerdo<=direita){
        meio = (esquerdo+direita)/2;
        if(v[meio] == chave){
            return meio;
        } else if(v[meio] > chave){
            direita= meio-1;
        } else if(v[meio] <chave){
            esquerdo = meio+1;
        } 
    }
    return -1;
    //[1,2,3,4,5,6];
    
}
/*int main()
{
    int numero[5] = {1,2,3,4,5};
    int local = busca_Binaria(numero,5,5);
    
    cout<<"Hello World";
    cout << endl << local;
    return 0;
}*/



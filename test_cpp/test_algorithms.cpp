#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_binaria.hpp"
#include "busca_seq_ordenada.hpp"
#include "recursao.hpp"
using namespace std;
#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

int main() {
    //Vetor desordenado <POPULAR>
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {4, 2, 1, 4, 2, 1}; // usando vetor mesmo tendo declarado int devido a supor que o senhor queira usar vector aqui na main
    


    //Ordenar o vetor
    
    //Tamanho do vetor <ALTERAR>
    //Vetor ordenado <POPULAR>
    //Tamanho do vetor <ALTERAR>
    

    //Eexemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas das funcao), resposta_esperada);
    RUN_TEST("Busca binaria de versao ruim", busca_Binaria(arr1.data(),arr1.size(), 4), 4);  //foi
    RUN_TEST("Conta especialidades distintaas (ex1)", conta_especialidades_distintas(arr2.data(), arr2.size()), 3); //foi
    RUN_TEST("Funcao recursiva",recursao("banana banana",'a'),6);
    return 0;
}


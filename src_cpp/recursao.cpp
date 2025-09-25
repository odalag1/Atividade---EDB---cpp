#include "recursao.hpp"
#include <string>
int recursao(string palavra, char letra) {
    if (palavra.empty()) { // caso de parada em que cada vez que a string for ficando vazia e quando ela ficar totalmente vazia ira retornar 0;
        return 0;
    } else if (palavra[0] == letra) {
        return recursao(palavra.substr(1), letra)  + 1;
    } else {
        return recursao(palavra.substr(1), letra);
    }
}

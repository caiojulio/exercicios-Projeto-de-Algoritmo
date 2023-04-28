#include <iostream>

/* 

    Alunos: 

    Caio Julio Santos da Silva -> 202204940023
    Arthur Henrique Azevedo Ṕimentel -> 202204940024

*/

using namespace std;

const char vogais[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', '\0'};

int contadorVogais( char *cadeia );

int main(){

    char cadeia[100];

    cout << "Digite uma palavra: ";
    cin.get(cadeia, 100);

    int qtdVogais = contadorVogais(cadeia);

    cout << "A cadeia: -> " << cadeia << " <- Possui: " << qtdVogais << " vogais." << endl; 

    return(0);

}

int contadorVogais( char *cadeia ){

    int vogaisContadas = 0;

    for (int i = 0 ; cadeia[i] != '\0'; i++ ){

        for ( int j = 0; vogais[j] != '\0'; j++){

            if ( cadeia[i] == vogais[j] )
                vogaisContadas++;
        } 

    }

    return vogaisContadas;

}


#include <iostream>

/*

    ALUNOS: 

    Caio Julio Santos da Silva -> 202204940023
    Arthur Henrique Azevedo Ṕimentel -> 202204940024

*/

using namespace std;


int comparar(char* s1, char* s2){
	int i; 
	
	for ( i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
		
		if (s1[i] < s2[i] )
			return -1;
			
		if (s1[i] > s2[i])
			return 1;
			
	}
	
	if (s1[i] == s2[i])
		return 0;
	else if ( s2[i] != '\0' )
		return -1;
	else 
		return 1;
	
}

int verificaPadCad(char *cadeia, char *padrao){

    int padraoTam = 0; //tamanho da subcadeia
    char subCad[100]; //subcadeia obtida da cadeia para testar
    int contadorOcorrencia = 0;
    	
    for ( int i = 0; padrao[i] != '\0' ; i++ ){
		padraoTam++; 
	}

    for ( int y = 0; cadeia[y] != '\0'; y++ ){

        if (cadeia[y] == padrao[0]){
        	
           int x = y;	//para comecar de onde o i parou e nao manipular o i
           int k = 0;

           for ( k ;  k < padraoTam ; k++ ){
           	
           		subCad[k] = cadeia[x];
           		x++;
                
		   }

           subCad[k] = '\0';
		   
			if ( comparar(subCad, padrao) == 0 ){
				contadorOcorrencia++;
			}


        
        }
    }
    
    return contadorOcorrencia;

}

int main(){

    char cadeia[81]; 
    char padrao[81]; 

    cout << "Informe a cadeia: ";
    cin.get(cadeia, 81);

    cout << "Informe o padrao: ";
    cin.ignore();
    cin.get(padrao, 81);

    cout << "\nCadeia: " << cadeia << endl;
    cout << "Padrao: " << padrao << endl;

    int ocorrencia = verificaPadCad(cadeia, padrao);
    
    if (ocorrencia > 0){

    	 cout << "\nExiste o padrao: " << padrao << " na cadeia: " << cadeia << endl;
    	 cout << "Existem " << ocorrencia << " ocorrencias de: " << padrao << " na cadeia: " << cadeia << endl;

	} else {

        cout << "Não existe o padrão: " << padrao << " na cadeia: " << cadeia << endl;
        
    }
    
}

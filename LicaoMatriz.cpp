#include "header.h"
// importação de terceiros que não sejam bibliotecas C e C++ recebem aspas e não <>;
int main (){
	
	srand(time(NULL));
	
	int vetor[LINHA][COLUNA];
	
	for(int linha = 0; linha < LINHA; linha++){
		for(int coluna = 0; coluna < COLUNA; coluna++){
		vetor[linha][coluna] = rand()%10;
		std:: cout << " | " << vetor[linha][coluna] << " | ";
		}
		std:: cout << "\n";
	}
	std:: cout << "\n";
	std:: cout << "\n";
	std:: cout << "Soma Linhas: \n";
	
	somarLinhas(vetor);
	std:: cout << "\n";
	std:: cout << "\n";
	std:: cout << "Soma Colunas: \n";
	somarColuna(vetor);
	std:: cout << "\n";
	std:: cout << "\n";
	std:: cout << "\n";
	somarDiagonal(vetor);
	
	
	
	return 0;
	
	
}

int somarLinhas(int vetor[LINHA][COLUNA]){
	int linhasSomadas[] = {0,0,0,0,0};
	
	for(int linha = 0; linha < LINHA; linha++){
		for(int coluna = 0; coluna < COLUNA; coluna++){
	    std:: cout << " | " << vetor[linha][coluna] << " | ";
		linhasSomadas[linha] += vetor[linha][coluna];
		}
		std:: cout << " = " << linhasSomadas[linha] << "\n";
	}	
	
	return 0;
}

int somarColuna(int vetor[LINHA][COLUNA]){
	int ColunasSomadas[] = {0,0,0,0,0};
	
	for(int linha = 0; linha < LINHA; linha++){
		for(int coluna = 0; coluna < COLUNA; coluna++){
	    std:: cout << " | " << vetor[linha][coluna] << " | ";
		ColunasSomadas[coluna] += vetor[linha][coluna];
		}
		std:: cout <<  "\n";
	}	
	for(int i = 0; i < 5; i++){
		std:: cout << " | " << ColunasSomadas[i] << " |";
	}
	
	return 0;
}

int somarDiagonal(int vetor[LINHA][COLUNA]){
	int diagonaisSomadas[] = {0,0};
	
	for(int linha = 0; linha < LINHA; linha++){
		for(int coluna = 0; coluna < COLUNA; coluna++){
		vetor[linha][coluna] = rand()%10;
		std:: cout << " | " << vetor[linha][coluna] << " | ";
		if(linha == coluna){
			for(int diagonal = 0; diagonal < 5; diagonal++){
				diagonaisSomadas[diagonal] += vetor[linha][coluna];
				}
			}
		}
		std:: cout << "\n";
	}
	
	for(int i = 0; i < 2; i++){
		std:: cout << "\n" << diagonaisSomadas[i];
	}
//	diagonaisSomadas[coluna] += vetor[linha][coluna];
}




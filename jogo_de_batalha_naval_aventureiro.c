#include <stdio.h>

int main() {

int linhas = 10, colunas = 10; // Variavel Inteira Résponsavel Por Armazenar os Valores das Linhas e Colunas.

int r = 0, g = 255, b = 0; // Variavel Inteira Résponsavel Por Armazenar os Valores de Cores no Formato RGB.

char letras [10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};	// Variavel Char Résponsavel Por Armazenar as Letras de A à J.

int num [10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10}; // Variavel Inteira Résponsavel Por Armazenar os Numeros das Linhas de 1 à 10.

int matriz[linhas][colunas]; // Variavel Inteira Résponsavel Por Armazenar os Valores da Matriz.

for (int i = 0; i < linhas ; i++) { 		// For Résponsavel Por Gerar os Valores das Linhas da Matriz.
	for (int j = 0; j < colunas ; j++) {	// For Résponsavel Por Gerar os Valores das Colunas da Matriz.
            matriz[i][j] = 0;
            		matriz[3][1] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[3][2] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[3][3] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			
			matriz[7][8] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[8][8] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[9][8] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			
			matriz[6][3] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[7][2] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[8][1] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			
			matriz[2][6] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[3][7] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[4][8] = 3;	// Atribuir o Valor Padrão 3 Para à Matriz.
        }
}

printf("\n\n     Tabuleiro Batalha Naval - Aventureiro:\n\n\n\n\n"); // Função Para Printar a Label na Tela.

printf("            "); // Função Para Printar Espaço na Tela Apenas Para Fins de Estetica.

for (int i = 0 ; i < 10 ; i++) { printf("%c  ", letras[i]); } // For Para Printar as Coordenadas de Letras.

printf("\n\n"); // Função Para Quebrar a Linha na Tela Apenas Para Fins de Estetica.

for (int i = 0 ; i < linhas ; i++) { // For Para Printar os Valores Linha Armazenados na Matriz.
      if (i == 10) { printf("     %d     ",i); } // Condição.
    	else { printf("     %d      ",i); } // Contradição.
          for (int j = 0 ; j < colunas ; j++) { // For Para Printar os Valores Coluna Armazenados na Matriz.
            if ( matriz[i][j] == 3 ) { // Condição.
              printf("\033[38;2;%d;%d;%dm%d  \033[0m", r, g, b, matriz[i][j]); } // Função Para dar Cor Verde aos Números 3.
                else { printf("%d  ", matriz[i][j]); } // Contradição.
           	}
printf("\n"); // Função Para Printar Espaço na Tela Apenas Para Fins de Estetica - IMPORTANTE PARA A MATRIZ!!!!.
}

printf("\n\n\n\n"); // Função Para Printar Espaço na Tela Apenas Para Fins de Estetica.

printf("© Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © \n\n"); // Função Para Printar Informaçoes de Contato.

return 0;
}

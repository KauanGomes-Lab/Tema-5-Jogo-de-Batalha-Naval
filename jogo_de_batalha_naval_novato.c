#include <stdio.h>

int main() {

int r = 0 , g = 255 , b = 0; // Variavel Inteira Résponsavel Por Armazenar os Valores de Cores no Formato RGB.  

int linha = 10 , coluna = 10; // Variavel Inteira Résponsavel Por Armazenar os Valores das Linhas e Colunas.

char letras [10] = { 'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' }; // Variavel Char Résponsavel Por Armazenar as Letras de A à J.

int num [10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 }; // Variavel Inteira Résponsavel Por Armazenar os Numeros das Linhas de 1 à 10.

int matriz[linha][coluna]; // Variavel Inteira Résponsavel Por Armazenar os Valores da Matriz.

for (int i = 0; i < linha; i++) {               // For Résponsavel Por Gerar os Valores das Linhas da Matriz. 
	for (int j = 0; j < coluna; j++) {      // For Résponsavel Por Gerar os Valores das Colunas da Matriz.
            matriz[i][j] = 0;                   // Atribuir o Valor Padrão 0 Para à Matriz.
            		matriz[3][1] = 3;       // Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[3][2] = 3;       // Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[3][3] = 3;       // Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[6][8] = 3;       // Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[7][8] = 3;       // Atribuir o Valor Padrão 3 Para à Matriz.
			matriz[8][8] = 3;       // Atribuir o Valor Padrão 3 Para à Matriz.
        }
}

printf("\n\n     Tabuleiro Batalha Naval - Novato:\n\n\n\n\n"); // Função Para Printar a Label na Tela.

printf("            "); // Função Para Printar Espaço na Tela Apenas Para Fins de Estetica.

for (int i = 0 ; i < 10 ; i++) { printf("%c  ", letras[i]); } // For Para Printar as Letras de A à J.

printf("\n\n"); // Função Para Quebrar a Linha na Tela Apenas Para Fins de Estetica.

for (int i = 0 ; i < linha ; i++) { // For Para Printar os Valores Linha Armazenados na Matriz.
    	if (i == 10) { printf("     %d     ", i); }
	   else { printf("     %d      ", i); }
              for (int j = 0 ; j < coluna ; j++) {       // For Para Printar os Valores Coluna Armazenados na Matriz.
                 if (matriz[i][j] == 3) { 
                    printf("\033[38;2;%d;%d;%dm%d  \033[0m", r, g, b, matriz[i][j]); }       // Função Para dar Cor Verde aos Números 3.
	               else { printf("%d  ", matriz[i][j]); }
	               }
	
printf("\n");       // Função Para Quebrar a Linha na Tela Apenas Para Fins de Estetica.
}
printf("\n\n\n\n");       // Função Para Quebrar a Linha na Tela Apenas Para Fins de Estetica.

printf("© Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © \n\n");  // Função Para Printar Informaçoes de Contato.

return 0;
}

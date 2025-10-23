#include <stdio.h>

#define LINHA 10  // Definindo Valor das Linhas.
#define COLUNA 10 // Definindo Valor das Colunas.

void ql( int a ) { for ( int i = 0 ; i < a ; i++ ) { printf("\n"); } } // Função Para Printar Quebra de Linha na Tela.

void label() { ql(2); printf("     Tabuleiro Batalha Naval - Mestre:"); ql(5); } // Função Para Printar a Label na Tela.

void espaco() { printf("           "); } // Função Para Printar Espaço na Tela Apenas Para Fins de Estetica.

// Função Para Printar o Nome do Criador na Tela.
void criador() { printf("© Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © "); ql(2); }

int main() {

int r = 0 , g = 255 , b = 0; // Cores no Formato RGB.

char letras [26]; // Variavel Char Para Armazenar as Letras de A à Z.

for ( int i = 0 ; i < 26 ; i++ ) { letras[i] = 'A' + i; } // For Para Gerar as Letras de A à Z.

int matriz [LINHA] [COLUNA]; // Variavel Inteira Para Armazenar a Matriz. 

for ( int i = 0 ; i < LINHA ; i++ ) { 		// Estrutura de Repetição Para Gerar as Linhas da Matriz.
    for ( int j = 0 ; j < COLUNA ; j++ ) { 	// Estrutura de Repetição Para Gerar as Colunas da Matriz.
        matriz[i][j] = 0; 		// Atribuir o Valor Padrão 0 Para à Matriz.
            
	    // Cruz.
            // Estrutura de Repetição Responsavel Por Gerar à Figura da Cruz Constituida de Valores 3 na Matriz.
            for ( int i = 2 ; i < 3 ; i++ ) { 	
            matriz[0][2] = 3;
            	for ( int i = 2 ; i < 3 ; i++ ) { 
            	matriz[1][i] = 3; }
            	    for ( int i = 0 ; i < 5 ; i++ ) {
            	    matriz[2][i] = 3; }
			for ( int i = 2 ; i < 3 ; i++ ) { 
			matriz[3][i] = 3; }
			    for ( int i = 2 ; i < 3 ; i++ ) {
			    matriz[4][i] = 3; }
            		    }
            			
			    // Cone.
			    // Estrutura de Repetição Responsavel Por Gerar à Figura do Cone Constituido de Valores 3 na Matriz.
			    for ( int i = 2 ; i < 3 ; i++ ) { 
			    matriz[7][i] = 3;
				for ( int i = 1 ; i < 4 ; i++ ) {
				matriz[8][i] = 3; }
				    for ( int i = 0 ; i < 5 ; i++ ) {
				    matriz[9][i] = 3; }
				    }
			
				    // Octaedro.
				    // Estrutura de Repetição Responsavel Por Gerar à Figura do Octaedro Constituido de Valores 3 na Matriz.
				    for ( int i = 7 ; i < 8 ; i++ ) {
				    matriz[3][i] = 3;
					for ( int i = 6 ; i < 9 ; i++ ) {
					matriz[4][i] = 3; }
					    for ( int i = 7 ; i < 9 ; i++ ) {
					    matriz[6][i] = 3; }
						for ( int i = 5 ; i < 10 ; i++ ) {
						matriz[5][i] = 3; }
						    for ( int i = 6 ; i < 9 ; i++ ) {
						    matriz[6][i] = 3; }
							for ( int i = 7 ; i < 8 ; i++ ) {
							matriz[7][i] = 3; }
							}
}
}

label(); // Chamar Função Label.

espaco(); // Chamar Função Espaço.

for ( int i = 0 ; i < 10 ; i++ ) { printf("%c  ", letras[i]); }	// Estrutura de Repetição Responsavel Por Printar Valores de Char.

ql(2);	// Chamar Função Para Printar Quebra de Linha na Tela Apenas Para Fins de Estetica.

// Estrutura de Repetição Responsavel Por Gerar o Número de Linhas na Tela.

for ( int i = 0 ; i < LINHA ; i++ ) {
   if ( i > 9 ) { printf("     %d    ", i); } // Condição da Estrutura de Repetição Se o Número de Linhas for Maior que 9 Ele Executa.
   else { printf("     %d     ", i); } // Condição da Estrutura de Repetição Se o Número de Linhas for Menor que 9 Ele Executa.
    
    	// Estrutura de Repetição Responsavel Por Gerar o Número de Colunas na Tela.
	for ( int j = 0 ; j < COLUNA ; j++ ) { 
	   if (matriz[i][j] == 3) { printf("\033[38;2;%d;%d;%dm%d  \033[0m", r, g, b, matriz[i][j]); // Função Para dar Cor Verde aos Números 3.
	   }else { printf("%d  ", matriz[i][j]); }
	   }ql(1); // Chamar Função Para Printar Quebra de Linha na Tela Apenas Para Fins de Estetica.
}

ql(4); // Chamar Função Para Printar Quebra de Linha na Tela Apenas Para Fins de Estetica.

criador();

return 0;
}

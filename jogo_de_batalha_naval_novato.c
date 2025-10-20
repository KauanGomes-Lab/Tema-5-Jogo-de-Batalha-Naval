#include <stdio.h>

int main() {

int r = 0 , g = 255 , b = 0;

int linha = 10 , coluna = 10;

char letras [10] = { 'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' };	

int num [10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };

int matriz[linha][coluna];

for (int i = 0; i < linha; i++) {
	for (int j = 0; j < coluna; j++) {
            matriz[i][j] = 0;
            		matriz[3][1] = 3;
			matriz[3][2] = 3;
			matriz[3][3] = 3;
			matriz[6][8] = 3;
			matriz[7][8] = 3;
			matriz[8][8] = 3;
        }
}

printf("\n\n     Tabuleiro Batalha Naval :\n\n\n\n\n");

printf("            ");

for (int i = 0 ; i < 10 ; i++) {
	printf("%c  ", letras[i]);
}

printf("\n\n");

for (int i = 0 ; i < linha ; i++) {
    	if (i == 10) {
    	    printf("     %d     ", i);
    		}else { printf("     %d      ", i); }
        for (int j = 0 ; j < coluna ; j++) {
           if (matriz[i][j] == 3) { 
               printf("\033[38;2;%d;%d;%dm%d  \033[0m", r, g, b, matriz[i][j]); } // Função Para dar Cor Verde aos Números 3.
	           else { printf("%d  ", matriz[i][j]); }
	           }
	
printf("\n");
}
printf("\n\n\n\n");

printf("© Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © \n\n");

return 0;
}

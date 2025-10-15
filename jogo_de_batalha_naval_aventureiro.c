#include <stdio.h>

int main() {

int a = 11 , b = 10 , i , j;

int  c , d;

char sel; 

char letras [10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};	

int num [10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

int matriz[a][b];

for (i = 0; i < a; i++) {
	for (j = 0; j < b; j++) {
            matriz[i][j] = 0;
            		matriz[3][1] = 3;
			matriz[3][2] = 3;
			matriz[3][3] = 3;
			
			matriz[7][8] = 3;
			matriz[8][8] = 3;
			matriz[9][8] = 3;
			
			matriz[6][3] = 3;
			matriz[7][2] = 3;
			matriz[8][1] = 3;
			
			matriz[2][6] = 3;
			matriz[3][7] = 3;
			matriz[4][8] = 3;
        }
}

printf("\n\n     Tabuleiro Batalha Naval :\n\n\n\n\n");

printf("            ");

for (int i = 0 ; i < 10 ; i++) {
	printf("%c  ", letras[i]);
}

printf("\n\n");

for (i = 1 ; i < a; i++) {
    	if (i == 10) {
    	printf("     %d     ",i);
    	}else {
    	printf("     %d      ",i);}
        for (j = 0 ; j < b ; j++) {
            printf("%d  ", matriz[i][j]);
        }
printf("\n");
}
printf("\n\n\n\n");
return 0;
}

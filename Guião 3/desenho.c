#include <stdio.h>
#include "desenho.h"

void imprime_triangulo(int num_linhas){
    int i,j;
    for(i=1;i<=num_linhas;i++){
        for(j=1;j<=num_linhas-i;j++)
            printf(" ");
        char letter = 'A';
        for(j=1;j<=((2*i-1)/2)+1;j++){
            printf("%c",letter);
            letter++;
        }
        letter= letter-2;
        for (j=1; j<=((2*i-1)/2); j++){
            printf("%c",letter);
            letter--;}
        printf("\n");

    }
}

void imprime_losango(int num_linhas){
    imprime_triangulo(num_linhas);
    int i,j;
    for (i=1; i<=num_linhas-1; i++){
        for (j=1; j<=i; j++)
            printf(" ");
        char letter= 'A';
        for (j=num_linhas-1;j>=((2*i-1)/2)+1;j--){
            printf("%c", letter);
            letter++;
        }
        letter--;
        for (j=num_linhas-2; j>((2*i-1)/2); j--){
            letter--;
            printf("%c",letter);
        }
        printf("\n");
    }
}

void imprime_hexagono(int num_linhas){
    int i, j;
    for (i = 1; i <= num_linhas; i++) {
        for (j = 1; j <= num_linhas - i; j++)
            printf(" ");
        char letter = '#';
        for (j = 1; j <= (2*i)+num_linhas-2; j++)
            printf("%c", letter);
        printf("\n");
    }
    for (i = (num_linhas-1); i >= 1; i--) {
        for (j = num_linhas; j>i; j--)
            printf(" ");
        char letter = '#';
        for (j =1 ; j <= (2*i)+num_linhas-2; j++)
            printf("%c", letter);
        printf("\n");
    }
}

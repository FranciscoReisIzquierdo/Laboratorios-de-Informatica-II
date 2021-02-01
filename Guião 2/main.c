#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
void question (int a, int b) {
    printf("Insira o valor da multiplicacao de %d com %d\n", a, b);
}

int main() {
    int a, b, c, d, resposta;
    srand(time(NULL));
    while (1) {
        a = rand() % 10;
        b = rand() % 10;
        question (a, b);
        scanf("%d", &resposta);
 while (a*b!= resposta) {
     c = rand() % 3;
     if (c == 0)
         printf("Errado! Tenta outra vez\n");
     if (c == 1)
         printf("Valor incorreto. Entao campeao? Tenta novamente\n");
     if (c == 2)
         printf("Bro? Es burro ou que?\n");

     question (a, b);
     scanf("%d", &resposta);
 }
 if (a*b == resposta) {
     d = rand() % 3;
     if (d == 0)
         printf("E carago!!! Es inteligente! Correto!\n");
     if (d == 1) {
         printf("Beeeeem campeao! Parabens\n");
     }
     if (d == 2)
         printf("Espetaaaaaaculo! Es um puto maravilha!\n");
 }
    }
}
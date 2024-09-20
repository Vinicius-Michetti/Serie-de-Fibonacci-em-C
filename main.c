#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci */

int main()
{
    int n, primeiro = 1, segundo = 0, terceiro;

    printf("Digite quantos elementos da serie de Fibonacci voce quer ver: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++){
            if (i == 0){
                printf("%d ", primeiro);
            }
            if (i == 1){
                printf("%d ", segundo);
            }
            terceiro = primeiro + segundo;
            primeiro = segundo;
            segundo = terceiro;
            printf("%d ", terceiro);
            }
    }


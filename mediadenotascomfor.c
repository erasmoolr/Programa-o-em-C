#include <stdio.h>
int main() {
   int nota;
   int soma = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota %d\n", i);
        scanf("%d", &nota);
        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
            i--; // Decrementa o contador para repetir a entrada da nota
        } else {
            soma += nota;

         }
    }
    float media = soma / 5.0;
    printf("A média das notas é: %.2f\n", media);
    return 0;
}
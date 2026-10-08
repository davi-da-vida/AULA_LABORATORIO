 #include <stdio.h>
int main() {
    int i;
    float val, soma;

    soma = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o %d-ésimo número = ", (i+1));
        scanf("%f", &val);
        soma = soma + val;
        printf("Parcial  %d da soma = %.2f\n", (i+1), soma);
    }
    printf("Soma total = %.2f", soma);
}

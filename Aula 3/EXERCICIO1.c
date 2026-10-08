 #include <stdio.h>
int main() {
    int i, par, impar;
    int alturas[5];
    float soma, media, maior, menor;
    par = 0;
    impar = 0;

    for(i = 0; i < 5; i++) {
        printf("alturas[%d] = ", (i+1));
        scanf("%d", &alturas[i]);
        maior = alturas[0];
        menor = alturas[0];
        if(alturas[i] > maior)
            maior = alturas[i];
        if(alturas[i] < menor)
            menor = alturas[i];
        if(alturas[i] % 2 == 0)    // SE RESTO(alturas[i] / 2) == 0 ENTAO
            par++;
        else
            impar++;
    }
    printf("\n\n\n\a");
    for(i = 0; i < 5; i++)
        printf("alturas[%d] = %d\n", (i+1), alturas[i]);
    printf("MAIOR VALOR: %.2f\n", maior);
    printf("MENOR VALOR: %.2f\n", menor);
    printf("QUANTIDADE DE VALORES PARES: %d\n", par);
    printf("QUANTIDADE DE VALORES ÍMPARES: %d", impar);
}

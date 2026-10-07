 #include <stdio.h>
int main() {
    int x;
    float n1, n2, total;

    printf("1- Adição de dois números.\n");
    printf("2- Subtração de dois números.\n");
    printf("3- Multiplicação de dois números.\n");
    printf("4- Divisão de dois números.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &x);

    if (x == 1) {
        printf("Digite dois números: ");
        scanf("%f%f", &n1, &n2);
        total = n1 + n2;
        printf("A ADIÇÃO ENTRE %f E %f RESULTA EM %f.", n1, n2, total);
    }
    else if (x == 2) {
        printf("Digite dois números: ");
        scanf("%f%f", &n1, &n2);
        total = n1 - n2;
        printf("A SUBTRAÇÃO ENTRE %f E %f RESULTA EM %f.", n1, n2, total);
    }
    else if (x == 3) {
        printf("Digite dois números: ");
        scanf("%f%f", &n1, &n2);
        total = n1 * n2;
        printf("A MULTIPLICAÇÃO ENTRE %f E %f RESULTA EM %f.", n1, n2, total);
    }
    else if (x == 4) {
        printf("Digite dois números: ");
        scanf("%f%f", &n1, &n2);
        if (n2 == 0)
            printf("NÃO É POSSÍVEL REALIZAR DIVISÃO POR ZERO.");
        else {
            total = n1 / n2;
            printf("A DIVISÃO ENTRE %f E %f RESULTA EM %f.", n1, n2, total);
        }
    }
    else
        printf("ENTRADA INVÁLIDA.");

return 0;
}

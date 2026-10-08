 #include <stdio.h>
int main() {
    int cod, q, aux;
    float total;
    aux = 1;
    while( aux == 1) {
        printf("Suco de laranja: 3,50 reais (cod: 200)\n");
        printf("Suco de uva: 3,80 reais (cod: 201)\n");
        printf("Refrigerante: 2,50 reais (cod: 202)\n");
        printf("Água mineral: 1,20 reais (cod: 203)\n");
        printf("Chá gelado: 2,30 reais (cod: 204\n");
        printf("Café: 1,50 reais (cod: 205)\n");
        printf("Digite um código: ");
        scanf("%d", & cod);

        if (cod >= 200 && cod <= 205) {
            printf("Quantidade: ");
            scanf("%d", &q);
            aux = 0;
            if (cod == 200)
                total = q * 3.5;
            else if (cod == 201)
                total = q * 3.8;
            else if (cod == 202)
                total = q * 2.5;
            else if (cod == 203)
                total = q * 1.2;
            else if (cod == 204)
                total = q * 2.3;
            else if (cod == 205)
                total = q * 1.5;
        }
        else {
            printf("Código inválido! Tente novamente.\n");
        }
    }
    printf("Total: %f reais", total);
    return 0;
}

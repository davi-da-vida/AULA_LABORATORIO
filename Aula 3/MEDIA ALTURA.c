 #include <stdio.h>
int main() {
    int i;
    float altura, soma, media;
    soma = 0;

    for(i = 0; i < 6; i++) {
        printf("Digite a altura do aluno %d = ", (i+1));
        scanf("%f", &altura);
        soma = soma + altura;
    }

    media = soma / 6;
    printf("Media de altura = %.2f", media);
}


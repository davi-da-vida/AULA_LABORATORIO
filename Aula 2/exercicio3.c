 #include <stdio.h>
int main() {
    int pontos;
    float distancia;
    distancia = 0;
    pontos = 0;

    while (distancia >= 0 && distancia < 10) {
        printf("Digite uma distância em metros: ");
        scanf("%f", &distancia);
        if (distancia >= 0 && distancia < 2) {
            printf("Você marcou um ponto.\n");
            pontos++;
        }
        else if (distancia >= 2 && distancia < 6) {
            printf("Você marcou dois pontos.\n");
            pontos = pontos + 2;
        }
        else if (distancia >= 6 && distancia < 10) {
            printf("Você marcou três pontos.\n");
            pontos = pontos + 3;
        }
        else
            printf("ERRO DE CALIBRAGEM DO EQUIPAMENTO.\n");
    }

    printf("PONTUAÇÃO TOTAL: %d", pontos);
}

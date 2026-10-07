 #include <stdio.h>
int main() {
    float distancia;

    printf("Digite uma distância em metros: ");
    scanf("%f", &distancia);

    if (distancia >= 0 && distancia < 2)
        printf("Você marcou um ponto.");
    else if (distancia >= 2 && distancia < 6)
        printf("Você marcou dois pontos.");
    else if (distancia >= 6 && distancia < 10)
        printf("Você marcou três pontos.");
    else
        printf("ERRO DE CALIBRAGEM DO EQUIPAMENTO.");

return 0;
}

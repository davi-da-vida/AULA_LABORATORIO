 #include <stdio.h>
int main() {
    int vetor1[5], vetor2[5], vetor[10], i, j;
    j = 0;
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
        vetor[j] = vetor1[i];
        j = j + 2;
    }
    j = 1;
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
        vetor[j] = vetor2[i];
        j = j + 2;
    }
    printf("VETORES MESCLADOS:\n");
    for(j = 0; j < 10; j++)
        printf("%d; ", vetor[j]);
}

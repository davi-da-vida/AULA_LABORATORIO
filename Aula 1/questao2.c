 #include <stdio.h>
int main() {
    int idade;4z
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7) {
        printf("Jogador pertencente à categoria Infantil A.");
    }
    else if (idade >= 8 && idade <= 10) {
        printf("Jogador pertencente à categoria Infantil B.");
    }
    else if (idade >= 11 && idade <= 13) {
        printf("Jogador pertencente à categoria Juvenil A.");
    }
    else if (idade >= 14 && idade <= 17) {
        printf("Jogador pertencente à categoria Juvenil B.");
    }
    else if (idade >= 18) {
        printf("Jogador pertencente à categoria Adulto.");
    }
    else {
        printf("Entrada inválida.");
    }
return 0;
}

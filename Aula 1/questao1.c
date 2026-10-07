 #include <stdio.h>
int main() {
float cod, qnt, valor;
printf("Cachorro quente: R$1,20; Bauru simples: R$1,30; Bauru com ovo: R$1,50; Hambúrguer: R$1,20; Cheeseburguer: 1,30; Refrigerante: R$1,00\n");
printf("Digite um preço: ");
scanf("%f", &cod);
printf("Agora digite a quantidade: ");
scanf("%f", &qnt);

valor = cod * qnt;

printf("TOTAL: %f", valor);

return 0;
}

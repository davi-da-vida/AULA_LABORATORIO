 #include <stdio.h>
int main() {
    int cont, num;
    scanf("%d", &num);

    for(cont = 0; cont < num; cont++)
        printf("Contador: %d\n", (cont+1));
}

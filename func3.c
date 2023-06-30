#include <stdio.h>

int menor(int x, int y){
    if (x < y){
        printf("O menor eh %d", x);

    }
    else {
        printf("O menor eh %d", y);
    }
}
int main(){
    int x, y;

    printf("Escolha um valor de x: ");
    scanf("%d", &x);
    printf("Escolha um valor de y: ");
    scanf("%d", &y);

menor(x, y);
return 0;

}
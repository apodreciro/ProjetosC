#include <stdio.h>
int maior(int x, int y);  
int main (){
    int x, y;
    printf("escolha um valor de x: ");
    scanf("%d", &x);
    printf("escolha um valor de y: ");
    scanf("%d", &y);

    maior(x,y);

    return 0;

}
int maior(int x, int y) {
    if (x > y){
        printf("O maior eh %d", x);
    }
    else{
        printf("O maior eh %d", y);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, n, i;
    x = rand() % 501;

    for (i = 0; i < 10; i ++){
    printf("Qual o numero? ");
    scanf("%d", &n);

    if (n == x){
    break;
    }

    }

if (i < 3){
printf("muito sortudo");
}
if (i >= 3 && i < 6){
    printf("sortudo");
}
if ( i <= 9 && i >= 6 ){
    printf("normal");
}
if ( i > 9){
    printf("Tente novamente");
}

    return 0;
}
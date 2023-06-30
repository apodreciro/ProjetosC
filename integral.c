#include <stdio.h>

int main () {
    float i, n, x, y, l, soma1, soma2, area;
    printf("quer dividir o grafico em quantas partes? ");
    scanf("%f", &n);
    printf("digite o limite superior da funcao: ");
    scanf("%f", &i);
    printf("digite o limite inferior da funcao: ");
    scanf("%f", &x);
    l = (i)/n;
    
    soma1 = 0;
    soma2 = 0;

    //definir a função a ser analisada aqui
    for(y = 0; y < i; y = y + l){
        area = (l*(y*y));
        soma1 = soma1 + area;
    }
    for(y = 0; y < x; y = y + l){
        area = (l*(y*y));
        soma2 = soma2 + area;
    }
    printf("a area embaixo da curva entre %.2f e %.2f eh %.5f\n", x, i, soma1 - soma2);
    
    system ("pause");
   return 0;
    }



    

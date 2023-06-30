//Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
//Para isto, mandou digitar uma linha para cada mercadoria com o nome, preço de compra e
//preço de venda das mesmas. Faça um algoritmo que:
//a) Determine e escreva quantas mercadorias proporcionam: lucro < 10%; 10% <= lucro <=
//20% e lucro > 20%.
//b) Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim
//como o lucro total.
#include <stdio.h>

int main(){
    float precoc, precov, ct = 0, cv = 0;
    int n, i, c1 = 0, c2 = 0, c3 = 0;

    printf("Quantas mercadorias voce comprou? ");
    scanf("%d", &n);

    for (i = 0; i < n; i ++){
        printf("Por quanto vc comprou a %d mercadoria? ", i + 1);
        scanf("%f", &precoc);
        printf("Por quanto vc vendeu? ");
        scanf("%f", &precov);


    if (precov - precoc < precoc*0.1){
        c1 = c1 + 1;
    }
    else if (precov - precoc >= precoc*0.1 && precov - precoc <= precoc*0.2){
        c2 = c2 + 1;
    }
    else if (precov - precoc > precoc*0.2){
        c3 = c3 + 1;
    }
    ct = ct + precoc;
    cv = cv + precov;
    }

    printf("O numero de mercadorias que obtiveram lucro menor que 10%% foram %d", c1);
    printf("\nO numero de mercadorias que obtiveram lucro maior que 10%% e menor que 20%% foram %d", c2);
    printf("\nO numero de mercadorias que obtiveram lucro maior que 20%% foram %d", c3);
    printf("\n O custo total foi de %.2f, as vendas foram %.2f e o lucro foi %.2f", ct, ct, cv - ct);

    return 0;
}

//Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, num
//determinado dia. Para cada casa visitada, é fornecido o número do canal (4, 5, 7, 12) e o
//número de pessoas que o estavam assistindo naquela casa. Se a televisão estivesse desligada,
//nada era anotado, ou seja, esta casa não entrava na pesquisa. Fazer um algoritmo que:
//a) Leia um número indeterminado de dados, sendo que o “FLAG” corresponde ao número
//do canal igual a zero;
//b) Calcule a p de audiência para cada emissora;
//c) Escreva o número do canal e a sua respectiva p.

#include <stdio.h>

int main() {
    int canal, v;
    int vt = 0;
    float p;

    // Inicializar contadores para cada canal
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    // Leitura dos dados de audiência
    while (1) {
        printf("Digite o numero do canal (0 para sair): ");
        scanf("%d", &canal);

        // Verificar se o usuário deseja sair
        if (canal == 0) {
            printf("FLAG");
            break;
        }

        printf("Digite o numero de pessoas assistindo: ");
        scanf("%d", &v);

        // Atualizar a contagem de audiência para cada canal
        switch (canal) {
            case 4:
                c1 += v;
                break;
            case 5:
                c2 += v;
                break;
            case 7:
                c3 += v;
                break;
            case 12:
                c4 += v;
                break;
            default:
                printf("Canal invalido.\n");
                continue; // Ir para a próxima iteração do loop
        }

        // Atualizar a contagem total de audiência
        vt += v;
    }

    // Cálculo e exibição da p de audiência para cada canal
    if (vt > 0) {
        printf("\n=== p de v ===\n");
        p = (float) c1 / vt * 100;
        printf("Canal 4: %.2f%%\n", p);
        p = (float) c2 / vt * 100;
        printf("Canal 5: %.2f%%\n", p);
        p = (float) c3 / vt * 100;
        printf("Canal 7: %.2f%%\n", p);
        p = (float) c4 / vt * 100;
        printf("Canal 12: %.2f%%\n", p);
    } else {
        printf("Nenhuma v registrada.\n");
    }

    return 0;
}
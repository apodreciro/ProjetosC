#include <stdio.h>

int main (){
    int v[5], u[5], n = 0, i;

for (i = 0; i < 5; i ++){
    printf("escolha o elemento %d do vetor v: ", i + 1);
    scanf("%d", &v[i]);
}
for (i = 0; i < 5; i ++){
    printf("escolha o elemento %d do vetor u: ", i + 1);
    scanf("%d", &u[i]);
}
for (i = 0; i < 5; i++){
    n = v[i]*u[i] + n;
}
printf("%d", n);

return 0;
}
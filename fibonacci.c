#include <stdio.h>

int main() {

int i, v[40], n;
printf("Quantos elementos da serie voce quer? ");
scanf("%d", &n);
v[0] = 0;
v[1] = 1;
for(i =2; i < n; i++){
    v[i] = v[i- 2] + v[i -1];
}
for(i =0; i < n; i++){
    printf("%d ", v[i]);
}

return 0;
}
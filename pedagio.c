#include<stdio.h>
int main(){
    int L ,D;
    int K ,P;
    scanf("%d %d ", &L,&D);
    scanf("%d %d", &K,&P);
    int valor = L*K;
    int v = L/D;
    int tudo = v*P;
    int resp= tudo +valor;
    printf("%d\n",resp);
}
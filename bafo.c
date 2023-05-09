#include <stdio.h>

int main(){

    int R, A, B, Soma1, soma2, soma3;

    do{
        scanf("%d", &R);
        soma3++;
        if(R == 0){
            break;
        } else {

            for(int i = 0; i<R; i++){ 
                scanf("%d %d", &A, &B);
                Soma1 += A;
                soma2 += B;
                
            }
        
            if(Soma1 > soma2){ 
                printf("Teste %d\n", soma3);
                printf("Aldo\n");
                printf("\n");
            } else {
                printf("Teste %d\n", soma3);
                printf("Beto\n");
                printf("\n");
            }
        }

       
        Soma1 = 0; 
        soma2 = 0;
        
    } while(R!=0);

    return 0;

}
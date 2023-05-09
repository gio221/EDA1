#include <stdio.h>

int main() {
    int n,v[10000],numer;
    int o =0;
    scanf("%d", &n);
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    } 
    
      scanf("%d",&numer);
      for (i = 0; i< n; i++){
        if(v[i]==numer){
            printf("pertence\n");
            return 0;
        }
    }
    printf("nao pertence\n");  
    return 0;
}
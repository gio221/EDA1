#include<stdio.h>
int main(){
   double A,G,Ra,Rg;
   double kma,kmg;
   scanf("%lf %lf %lf %lf",&A,&G,&Ra,&Rg);
   kma=(A/Ra);
   kmg=(G/Rg);

    if(kma < kmg){
       printf("A\n");
   }else if(kmg<kma){
       printf("G\n");
  
}else{
   printf("G");
}
return 0;
}
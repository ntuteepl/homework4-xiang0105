#include <stdio.h>

int
main ()
{
    // 1-2
   int inp , acc , pass;
   scanf("%d",&inp);

   for(int i = 0 ; i < inp ; i++){
       scanf("%d %d",&acc , &pass);
       if(acc == 123 && pass == 456){
           printf("9000\n");
       }else if(acc == 456 && pass == 789){
           printf("5000\n");
       }else if(acc == 789 && pass == 888){
           printf("6000\n");
       }else if(acc == 336 && pass == 558){
           printf("10000\n");
       }else if(acc == 775 && pass == 666){
           printf("12000\n");
       }else if(acc == 566 && pass == 221){
           printf("7000\n");
       }else{
           printf("error\n");
       }
   }


}


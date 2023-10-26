#include <stdio.h>

int
main ()
{
     int n , inp , total = 1 , watch = 1 , star = 0;
   
   scanf("%d" , &n);
   
   int list[n*2] , drive[n][n*2];
   
   for(int i = 0 ; i < n * 2 ; i++){
       scanf("%d" , &inp);
        list[i] = inp;
       
   }
   
   for(int i = 0 ; i < n * 2 ; i += 2){
       
       if(total != watch && list[i-1] > list[i+2]){
           drive[star + (n - 1)][i] = list[i];
           drive[star + (n - 1)][i + 1] = list[i + 1];
           watch = total;
       }else if(total != watch){
           drive[star + (n-2)][i] = list[i];
           drive[star + (n-2)][i + 1] = list[i + 1];
           watch = total;
       }else{
           drive[star][i] = list[i];
           drive[star][i + 1] = list[i + 1];
       }
       
       if(list[i+1] > list[i+2] && i == 0){
           total += 1 ;
       }
       if(list[i+1] > list[i+2] && list[i-1] > list[i+2] && i > 1){
           total += 1;
       }
       
       
   }
   
   printf("%d\n" , total);
   
   for(int i = 0 ; i < total ; i++){
           printf("Driver %d's schedule is " , i);
       for(int j = 0 ; j < n * 2 ; j++){
           if(drive[i][j] != 0 ){
               printf("%d " , drive[i][j]);
           }
       }
           printf("\n");
   }

}

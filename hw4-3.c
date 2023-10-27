#include <stdio.h>
#define ARRAYSIZE 10000
int main ()
{
   int n , inp , total = 1 , temp[ARRAYSIZE];
    
   scanf("%d" , &n); 
    
   int list[ARRAYSIZE] , drive[n][ARRAYSIZE];
   
   for(int i = 0 ; i < n * 2 ; i++){
       scanf("%d" , &inp);
       list[i] = inp;
       if(i % 2 != 0 && i > 1){
           for(int j = 0 ; j < i - 1 ; j++){
               if(list[j*2] > list[i - 1]){
                   temp[0] = list[j*2];
                   temp[1] = list[j*2+1];
                   list[j*2] = list[i - 1];
                   list[j*2+1] = list[i];
                   list[i - 1] = temp[0];
                   list[i] = temp[1];
               }
           }
       }
   }
  
  drive[0][0] = list[0];
  drive[0][1] = list[1];
  
  for(int i = 0 ; i < n ; i++){
      int x = 1;
      for(int j = 0 ; j < n*2 ; j+=2){
          if(drive[i][x] <= list[j] && drive[i][x] != 0){
              drive[i][x + 1] = list[j];
              drive[i][x + 2] = list[j+1];
              list[j] = 0 ;
              list[j+1] = 0;
              x += 2;
          }
      }
      for(int g = 0 ; g < n * 2 ; g+=2){
          if(drive[i][0] == list[g] && drive[i][1] != list[g+1]){
            drive[i+1][0] = list[g];
            drive[i+1][1] = list[g+1];
            list[g] = 0 ;
            list[g+1] = 0;
            total += 1;
            break;
          }
          if(drive[i][0] < list[g] && drive[i][0] != 0){
            drive[i+1][0] = list[g];
            drive[i+1][1] = list[g+1];
            list[g] = 0 ;
            list[g+1] = 0;
            total += 1;
            break;
          }
      }
  }
   
  printf("%d\n" , total);
   
  for(int i = 0 ; i < total ; i++){
          printf("Driver %d's schedule is " , i + 1);
      for(int j = 0 ; j < n * 2 ; j++){
          if(drive[i][j] != 0 ){
              printf("%d " , drive[i][j]);
          }
      }
          printf("\n");
  }
   
}

#include <stdio.h>

int
main ()
{
     int total = 1, list[10], num , drive1[10] , drive2[10] , drive3[10];

      for (int i = 0; i < 6; i++){
         scanf ("%d", &num);
         list[i] = num;
      }

      drive1[0] = list[0];
      drive1[1] = list[1];

      if (list[1] > list[2]){
          total += 1;
          drive2[0] = list[2];
          drive2[1] = list[3];
      }else{
          drive1[2] = list[2];
          drive1[3] = list[3];
      }


      if (list[3] > list[4] && list[1] > list[4]){
          total += 1;
          drive3[0] = list[4];
          drive3[1] = list[5];
      }else if(list[1] < list[4]){
          drive1[4] = list[4];
          drive1[5] = list[5];
      }else if(list[3] < list[4]){
          drive2[2] = list[4];
          drive2[3] = list[5];
      }

      if(total == 2){
          printf("%d\n" , total);
          printf("Driver 1's schedule is %d %d %d %d\n" , drive1[0] , drive1[1] , drive1[4] , drive1[5]);
          printf("Driver 2's schedule is %d %d\n" , drive2[0] , drive2[1]);
      }else{
          printf("%d\n" , total);
          printf("Driver 1's schedule is %d %d\n" , drive1[0] , drive1[1]);
          printf("Driver 2's schedule is %d %d\n" , drive2[0] , drive2[1]);
          printf("Driver 3's schedule is %d %d\n" , drive3[0] , drive3[1]);
      }

}

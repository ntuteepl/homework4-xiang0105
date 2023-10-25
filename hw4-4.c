#include <stdio.h>

int
main ()
{
    int inp ,num1 , num2 , num3;

    scanf("%d" , &inp);

    int list[inp] , sex[inp];

    if(inp == 3){
        for(int i = 0 ; i < inp ; i++){
            scanf("%d %d %d", &num1 , &num2 , &num3);

            if(num1 > num2 && num1 > num3){
                list[i] = num1;
                sex[i] = 1;
            }else if(num2 > num1 && num2 > num3){
                list[i] = num2;
                sex[i] = 2;
            }else{
                list[i] == num3;
                sex[i] = 3;
            }
        }

        if(list[0] > list[1] && list[0] > list[2]){
            printf("boy 1 pair with girl %d\n" , sex[0]);
            if(list[1] > list[2]){
                printf("boy 2 pair with girl %d\n" , sex[1]);
                printf("boy 3 pair with girl %d\n" , 6 - sex[0] - sex[1]);
            }else{
                printf("boy 3 pair with girl %d\n" , sex[2]);
                printf("boy 2 pair with girl %d\n" , 6 - sex[0] - sex[2]);
            }
        }
        if(list[1] > list[0] && list[1] > list[2]){
            printf("boy 2 pair with girl %d\n" , sex[1]);
            if(list[0] > list[2]){
                printf("boy 1 pair with girl %d\n" , sex[0]);
                printf("boy 3 pair with girl %d\n" , 6 - sex[0] - sex[1]);
            }else{
                printf("boy 3 pair with girl %d\n" , sex[2]);
                printf("boy 1 pair with girl %d\n" , 6 - sex[1] - sex[2]);
            }
        }
        if(list[2] > list[1] && list[2] > list[1]){
            printf("boy 1 pair with girl %d\n" , sex[2]);
            if(list[1] > list[0]){
                printf("boy 2 pair with girl %d\n" , sex[1]);
                printf("boy 1 pair with girl %d\n" , 6 - sex[1] - sex[2]);
            }else{
                printf("boy 1 pair with girl %d\n" , sex[0]);
                printf("boy 2 pair with girl %d\n" , 6 - sex[0] - sex[2]);
            }
        }

    }

    if(inp == 2){
        for(int i = 0 ; i < inp ; i++){
            scanf("%d %d" , &num1 , &num2);
            if(num1 > num2){
                list[i] = num1;
                sex[i] = 1;
            }else{
                list[i] = num2;
                sex[i] = 2;
            }
        }

        if(list[0] > list[1] && sex[0] == 1){
            printf("boy 1 pair with girl 1\n");
            printf("boy 2 pair with girl 2\n");
        }

        if(list[0] > list[1] && sex[0] == 2){
            printf("boy 1 pair with girl 2\n");
            printf("boy 2 pair with girl 1\n");
        }

        if(list[0] < list[1] && sex[1] == 1){
            printf("boy 2 pair with girl 1\n");
            printf("boy 1 pair with girl 2\n");
        }

        if(list[0] < list[1] && sex[1] == 2){
            printf("boy 2 pair with girl 2\n");
            printf("boy 1 pair with girl 1\n");
        }
    }

}

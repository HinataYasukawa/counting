#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAXNUM 10

int main(void){
    srand(time(NULL));
    printf("please input number 0~999.\n\n");

    int ans = rand() % 1000 + 1;
    int no;
    int num[MAXNUM];
    int stage = 0;

    while(no != ans && stage < MAXNUM){
        printf("your answer:");
        scanf("%d", &no);
        num[stage] = no;
        stage++;

        if(no > ans) printf("It's bigger.\n\nlast %d times.", MAXNUM - stage);
        else if(no < ans) printf("It's smaller.\n\nlast %d times.", MAXNUM - stage);
    }

        if(no == ans){
            printf("correct.\n");
        } else{
        printf("you are loser.gg.");
    }
    printf("ans = %d\n", ans);
    printf("It took %d times. The answer history is...\n-------------------------------------------\n", stage);
    for(int i = 0; i < stage; i++){
        if(i+1 < 10){
            printf("%d  : %-4d\n",i+1, num[i]);
        }else{
            printf("%d : %-4d\n",i+1, num[i]);
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    printf("please input number 1~9.\n\n");

    int ans = (rand() % 9) + 1;
    int no;
    bool cor = false;

    while(cor == false){
        printf("your answer:");
        scanf("%d", &no);

        if(no == ans){
            printf("correct.\n");
            printf("ans = %d", ans);
            cor = true;
        }
        else if(no > ans) printf("It's bigger.\n\n");
        else if(no < ans) printf("It's smaller.\n\n");
    }

    return 0;
}
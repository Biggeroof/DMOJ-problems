#include<stdio.h>

int main(){
    int lines=0;
    int i=0;
    int h=0;
    char symbols[20];
    int nums[20];
    scanf("%d", &lines);
    for(i=1;i<=lines;i++){
        scanf("%d %c", &nums[i], &symbols[i]);
    }

    for(i=1;i<=lines;i++){
        for(h=1;h<=nums[i];h++)
            printf("%c", symbols[i]);
            printf("\n");
    }
}